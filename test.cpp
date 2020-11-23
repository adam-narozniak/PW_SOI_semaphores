#include "test.h"
//adds 10 elements and prints after simple operations
void put_to_queue_and_print(Queue queue){
    for(int i = 1; i<10; i++) {
        queue.put(i);
        queue.put(2*i);
        cout << queue.get_last_in_queue() << endl;
        cout << "n_even " << queue.get_n_even() << "n_odd" << queue.get_n_odd() << endl;
    }

    queue.print_head_to_tail();
    cout << queue.get_last_in_queue() << endl;
    queue.get();
    cout << queue.get_last_in_queue() << endl;
    queue.get();
    cout << queue.get_last_in_queue() << endl;
    queue.get();
    cout << queue.get_last_in_queue() << endl;
    cout << "n_even " << queue.get_n_even() << "n_odd" << queue.get_n_odd() << endl;
    queue.put(177);
    cout << queue.get_last_in_queue() << endl;
    queue.print_head_to_tail();
}