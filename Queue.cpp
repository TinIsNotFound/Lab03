#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue()
{
    this->nNum = 0;
    this->linkedlist = new LinkedList();
}

Queue::~Queue()
{

}

void Queue::enqueue(int x)
{
    Element* p = new Element(x);
    this->linkedlist->insertFirst(p);
}

int Queue::dequeue()
{
    if (this->linkedlist->getHead() == nullptr)
    {
        cout << "QUEUE RONG, KHONG LAY DUOC PHAN TU\n";
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

void Queue::printQueue()
{
    Element* e = this->linkedlist->getHead();
    while (e != nullptr)
    {
        cout << e->getdata() << "\t";
        e = e->getpointer();
    }
    cout << endl;
}

void Queue::enqueue_2(int x)
{
    Element* e = new Element(x);
    this->linkedlist->AddTail(e);
}

int Queue::dequeue_2()
{
    if (this->linkedlist->getHead() == nullptr)
    {
        cout << "QUEUE RONG, KHONG LAY DUOC PHAN TU\n";
        return -1;
    }

    Element* e = this->linkedlist->getHead();
    int data = e->getdata();

    this->linkedlist->setHead(e->getpointer());
    delete e;

    return data;
}
