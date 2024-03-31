#include "stack.h"
#include "queue.h"
#include <iostream>

using namespace std;

int main()
{
    Stack* s = new Stack();

    s->push(7);
    s->push(10);
    s->push(18);
    s->push(20);
    s->printStack();

    cout << "\n";

    s->pop();
    s->printStack();

    cout << "\n\n";

    s->push_2(27);
    s->printStack();

    cout << "\n";

    s->pop_2();
    s->printStack();

    cout << "\n\n=> 22 ->chuyen tu co so 10->co so 2 la: ";
    s->DecToBinary(22);

    cout << "\n\n-------------------------\n";

    Queue* q = new Queue();

    q->enqueue(8);
    q->enqueue(11);
    q->enqueue(19);
    q->enqueue(22);
    q->printQueue();

    cout << "\n";

    q->dequeue();
    q->printQueue();

    cout << "\n\n";

    q->enqueue_2(28);
    q->printQueue();

    cout << "\n";

    q->dequeue_2();
    q->printQueue();

    cout << endl;

    return 0;
}
