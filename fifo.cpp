#include "fifo.h"

Queue::Queue(){
    array = new unsigned int[QUEUE_SIZE];
    capacity = QUEUE_SIZE;
    tail = -1;
    head = 0;
    count = 0;
    last_in_queue = INT32_MIN;
    n_odd = 0;
    n_even = 0;
}
Queue::Queue(unsigned int size) {
    array = new unsigned int[size];
    capacity = size;
    tail = -1;
    head = 0;
    count = 0;
    last_in_queue = INT32_MIN;
    n_odd = 0;
    n_even = 0;
}
void Queue::put(unsigned int message){
    cout<<"Inserting "<<message<<endl;
    if(capacity==count){
        cout<< "Can't produce any more que is full"<<endl;
        exit(EXIT_FAILURE);
    }

    (message%2)==0 ? ++n_even : ++n_odd;
    tail = (++tail)%capacity;
    array[tail] = message;
    count++;
    cout<<"count: "<< count<<"; n_even: "<<n_even<<"; n_odd: "<<n_odd<<endl;
    if (count == 1) {
        last_in_queue = message;
    }
}
unsigned int Queue::get(){

    if(count == 0){
        cout<< "Can't eat from empty queue"<<endl;
        exit(EXIT_FAILURE);
    }
    unsigned int to_return = array[head];


    head = (++head)%capacity;
    count --;
    cout<<"Removing last element: "<<to_return<<endl;
    cout<<"count: "<< count<<"; n_even: "<<n_even<<"; n_odd: "<<n_odd<<endl;
    (last_in_queue % 2) == 0 ? --n_even : --n_odd;
    if (count==0){
        last_in_queue = INTMAX_MIN;
    }
    else{
        last_in_queue = array[head];
    }
    return to_return ;
}
void Queue::print_head_to_tail() {
    for(unsigned int i = 0; i<count; i++){
        cout<<array[(head+i)%capacity]<<" ";
    }
    cout<<"printing done"<<endl;
}
unsigned int Queue::get_n_odd(){return n_odd;}
unsigned int Queue::get_n_even(){return n_even;}
unsigned int Queue::get_last_in_queue(){return last_in_queue;}
unsigned int Queue::get_count(){return count;}