#include "producers.h"
using namespace std;

class AbstractProducer {
private:
    Queue *queue_ptr;
    Queue queue;
public:
    AbstractProducer(void *arg) : queue_ptr((Queue *) arg) {queue= *queue_ptr;}

    //Thread function to produce
    virtual void *produce(void *arg) = 0;
};

class ProducerA1: public AbstractProducer{

public:
    ProducerA1(void* arg): AbstractProducer(arg){}
    void produce(){

        while(true){
;
        }
    }
};


class AbstractConsumer{
public:
    virtual void* consume(void* arg)=0;
};
