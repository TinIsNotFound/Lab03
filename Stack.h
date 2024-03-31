#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

class Stack
{
    private:
        int nNum;
        LinkedList* linkedlist;

    public:
        Stack();
        virtual ~Stack();

        void push(int);
        int pop();
        void printStack();
        void push_2(int);
        int pop_2();
        void DecToBinary(int);

    protected:

};

#endif // STACK_H