#include <iostream>
#include "fifo.h"
#include "test.h"
#include "monitor.h"
#include <pthread.h>
#include <stdio.h>
#include <cstdlib>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#define SLEEP_TIME 0.2
#define MAXIUMUM_RAND 600

Semaphore global_sem(1);
Semaphore prod_A1_sem(0), prod_A2_sem(0), cons_B1_sem(0), cons_B2_sem(0);

int n_of_A1_waiting=0, n_of_A2_waiting=0, n_of_B1_waiting=0, n_of_B2_waiting=0;
bool can_prod_A1(Queue* queue_ptr){
    if(queue_ptr->get_n_even()<10) return true;
    else return false;

};
bool can_prod_A2(Queue* queue_ptr){
    if(queue_ptr->get_n_even()>queue_ptr->get_n_odd()) return true;
    else return false;

};
bool can_cons_B1(Queue* queue_ptr){
    if((queue_ptr->get_count()>3) && (queue_ptr->get_last_in_queue()%2==0)) return true;
    else return false;
};
bool can_cons_B2(Queue* queue_ptr){
    if((queue_ptr->get_count()>7) && (queue_ptr->get_last_in_queue()%2==1)) return true;
    else return false;
};

[[noreturn]] //thread function
void* producer_A1(void* arg){
    Queue* queue_ptr= (Queue *) arg;
    int random;
    unsigned int data = 0;
    while(true){
        global_sem.p();
        if(!can_prod_A1(queue_ptr)){
            ++n_of_A1_waiting;
            global_sem.v();
            prod_A1_sem.p();
            --n_of_A1_waiting;
        }

        //putting into a buffer - critical section
        queue_ptr->put(data);
        data = (data+2)%100;

        if(n_of_A2_waiting && can_prod_A2(queue_ptr)){
            prod_A2_sem.v();
        }
        else if(n_of_B1_waiting && can_cons_B1(queue_ptr)){
            cons_B1_sem.v();
        }
        else if(n_of_B2_waiting && can_cons_B2(queue_ptr)){
            cons_B2_sem.v();
        }
        else{
            global_sem.v();
        }
        //random will be from 0 to MAXIUMUM_RAND/100 seconds
        random = (rand()%MAXIUMUM_RAND)/100;
        sleep(SLEEP_TIME + random);
    }
    //normally you would exit that way but it is an infinite loop
    pthread_exit(0);
}

[[noreturn]] //thread function
void *producer_A2(void* arg){
    Queue* queue_ptr= ((Queue *) arg);
    int random;
    unsigned int data = 1;
    while(true){
        global_sem.p();
        if(!can_prod_A2(queue_ptr)){
            ++n_of_A2_waiting;
            global_sem.v();
            prod_A2_sem.p();
            --n_of_A2_waiting;
        }

        //putting into buffer - critical section
        queue_ptr->put(data);
        data = (data+2)%100;

        if(n_of_A1_waiting && can_prod_A1(queue_ptr)){
            prod_A1_sem.v();
        }
        else if(n_of_B1_waiting && can_cons_B1(queue_ptr)){
            cons_B1_sem.v();
        }
        else if(n_of_B2_waiting && can_cons_B2(queue_ptr)){
            cons_B2_sem.v();
        }
        else{
            global_sem.v();
        }
        //random will be from 0 to 0.4 seconds
        random = (rand()%MAXIUMUM_RAND)/100;
        sleep(SLEEP_TIME + random);
    }
    //normally you would exit that way but it is an infinite loop
    pthread_exit(0);
}

[[noreturn]] //thread function
void *consumer_B1(void* arg){
    Queue* queue_ptr= ((Queue *) arg);
    int random;
    int data;
    while(true){
        global_sem.p();
        if(!can_cons_B1(queue_ptr)){
            ++n_of_B1_waiting;
            global_sem.v();
            cons_B1_sem.p();
            --n_of_B1_waiting;
        }

        //pobieranie do bufora
        data = queue_ptr->get();


        if(n_of_A2_waiting && can_prod_A2(queue_ptr)){
            prod_A2_sem.v();
        }
        else if(n_of_A1_waiting && can_prod_A1(queue_ptr)){
            prod_A1_sem.v();
        }
        else if(n_of_B2_waiting && can_cons_B2(queue_ptr)){
            cons_B2_sem.v();
        }
        else{
            global_sem.v();
        }
        //random will be from 0 to 0.4 seconds
        random = (rand()%MAXIUMUM_RAND)/100;
        sleep(SLEEP_TIME + random);
    }
    //normally you would exit that way but it is an infinite loop
    pthread_exit(0);
}

[[noreturn]] //thread function
void *consumer_B2(void* arg){
    Queue* queue_ptr= ((Queue *) arg);
    int random;
    int data;
    while(true){
        global_sem.p();
        if(!can_cons_B2(queue_ptr)){
            ++n_of_B2_waiting;
            global_sem.v();
            cons_B2_sem.p();
            --n_of_B2_waiting;
        }

        //getting from a buffer - critical section
        data = queue_ptr->get();


        if(n_of_A2_waiting && can_prod_A2(queue_ptr)){
            prod_A2_sem.v();
        }
        else if(n_of_A1_waiting && can_prod_A1(queue_ptr)){
            prod_A1_sem.v();
        }
        else if(n_of_B1_waiting && can_cons_B1(queue_ptr)){
            cons_B1_sem.v();
        }
        else{
            global_sem.v();
        }
        //random will be from 0 to 0.4 seconds
        random = (rand()%MAXIUMUM_RAND)/100;
        sleep(SLEEP_TIME + random);
    }
    //normally you would exit that way but it is an infinite loop
    pthread_exit(0);
}

/*void *producerA1(void* arg){

}*/
void test_stuff(void* arg){
    Queue* queue_ptr= ((Queue *) arg);
    queue_ptr->put(1444);

}
int main() {
    //seeding for random number
    srand(time(NULL));
    Queue queue;
    Queue* queue_ptr;
    queue_ptr = &queue;
    //test_stuff(queue_ptr);
    //queue.print_head_to_tail();


    //Thread ID
    pthread_t A1_tid, B1_tid, A2_tid, B2_tid;

    //Create attributes
    pthread_attr_t A1_attr, B1_attr, A2_attr, B2_attr;
    pthread_attr_init(&A1_attr);
    pthread_attr_init(&B1_attr);
    pthread_attr_init(&A2_attr);
    pthread_attr_init(&B2_attr);

    //run thread
    pthread_create(&A1_tid, &A1_attr, producer_A1, queue_ptr);
    //pthread_create(&A2_tid, &A2_attr, producer_A2, queue_ptr);
    //pthread_create(&B1_tid, &B1_attr, consumer_B1, queue_ptr);
    pthread_create(&B2_tid, &B2_attr, consumer_B2, queue_ptr);
    //wait until thread is done
    pthread_join(A1_tid, NULL);
    //pthread_join(B1_tid, NULL);
    //pthread_join(A2_tid, NULL);
    pthread_join(B2_tid, NULL);



    return 0;
}

