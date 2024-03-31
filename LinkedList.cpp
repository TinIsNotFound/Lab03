#include "LinkedList.h" 
#include <iostream>
#include <math.h>

using namespace std;

LinkedList::LinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->nNum = 0;
}

LinkedList::~LinkedList()
{

}

void LinkedList::insertFirst(Element* e)
{
    if (this->head == nullptr)
        this->head = this->tail = e;
    else
    {
        e->Setpointer(this->head);
        this->head = e;
    }
    this->nNum++;

}

bool LinkedList::deletefirst()
{
    if (this->head == nullptr)
        return false;
    else
    {
        Element* p = this->head;
        this->head = this->head->getpointer();
        delete p;
        return true;
    }
}

void LinkedList::AddTail(Element* e)
{
    if (this->getHead() == nullptr)
        this->insertFirst(e);
    else
    {
        Element* p = this->getHead();
        while (p->getpointer() != nullptr)
            p = p->getpointer();
        p->Setpointer(e);
    }
}
