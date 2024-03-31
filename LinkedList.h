#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Element.h"

class LinkedList
{
	private:
		int nNum;
		Element* head;
		Element* tail;

	public:
		LinkedList();
		virtual ~LinkedList();
		Element* getHead() { return head; }
		void setHead(Element* val) { head = val; }
		Element* getTail() { return tail; }
		void setTail(Element* val) { tail = head; }

		void insertFirst(Element*);
		bool deletefirst();
		void AddTail(Element*);

	protected:

};
#endif // !LINKEDLIST_H
