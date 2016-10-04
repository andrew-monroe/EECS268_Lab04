

#ifndef Queue_h
#define Queue_h

#include "QueueInterface.h"
#include "Node.h"

template <typename T>
class Queue: public QueueInterface<T>
{
    public:

        Queue();

        ~Queue();

        bool isEmpty();

        void enqueue(T newBack) throw(PreconditionViolationException);

        T peekFront() throw(PreconditionViolationException);

        T dequeue() throw(PreconditionViolationException);

    private:
        Node<T>* m_front;
};

#include "Queue.hpp"

#endif
