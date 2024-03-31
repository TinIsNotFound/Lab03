#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

class Queue
{
    private:
        int nNum;
        LinkedList* linkedlist;

    public:
        Queue();
        virtual ~Queue();

        void enqueue(int);
        int dequeue();
        void printQueue();
        void enqueue_2(int);
        int dequeue_2();

    protected:

};

#endif // STACK_H