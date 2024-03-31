#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack()
{
    this->nNum = 0;
    this->linkedlist = new LinkedList();
}

Stack::~Stack()
{
    delete this->linkedlist;
}

void Stack::push(int x)
{
    Element* p = new Element(x);
    this->linkedlist->insertFirst(p);
}

int Stack::pop()
{
    if (this->linkedlist->getHead() == nullptr)
    {
        cout << "STACK RONG, KHONG LAY DUOC PHAN TU\n";
        return -1;
    }
    int p = this->linkedlist->getHead()->getdata();
    this->linkedlist->deletefirst();
    return p;
}

void Stack::printStack()
{
    Element* e = this->linkedlist->getHead();
    while (e != nullptr)
    {
        cout << e->getdata() << "\t";
        e = e->getpointer();
    }
    cout << endl;
}

void Stack::push_2(int x)
{
    Element* e = new Element(x);
    this->linkedlist->AddTail(e);
}

int Stack::pop_2()
{
    if (this->linkedlist->getHead() == nullptr)
    {
        cout << "STACK RONG, KHONG LAY DUOC PHAN TU\n";
        return -1;
    }

    Element* e = this->linkedlist->getHead();
    Element* p = nullptr;

    while (e->getpointer() != nullptr)
    {
        p = e;
        e = e->getpointer();
    }

    int data = e->getdata();
    delete e;

    if (p != nullptr)
        p->Setpointer(nullptr);
    else
        this->linkedlist->setHead(nullptr);

    return data;
}

void Stack::DecToBinary(int val)
{
    while (val > 0)
    {
        this->push(val % 2);
        val /= 2;
    }

    while (this->linkedlist->getHead() != nullptr)
    {
        cout << this->pop();
    }
    cout << endl;
}




