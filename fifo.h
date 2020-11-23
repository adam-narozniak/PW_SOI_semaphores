#ifndef FIFO_H
#define FIFO_H


#include <iostream>
#define QUEUE_SIZE 20
using namespace std;

class Queue{
    unsigned int *array;
    unsigned int capacity;
    int head;
    int tail;
    unsigned int count;  //current number of items
    unsigned int last_in_queue;//stores an element to pop
    unsigned int n_odd;
    unsigned int n_even;
public:
    Queue(unsigned int size);
    Queue();
    void put(unsigned int message);
    unsigned int get();
    void print_head_to_tail();
    unsigned int get_n_odd();
    unsigned int get_n_even();
    unsigned int get_last_in_queue();
    unsigned int get_count();
};

#endif