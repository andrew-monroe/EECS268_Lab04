

#ifndef Queue_h
#define Queue_h

#include "QueueInterface.h"

template <typename T>
class Queue: public QueueInterface
{
    public:
        ~Queue();

        bool isEmpty();

        void enqueue(T newBack) throw(PreconditionViolationException);

        T peekFront() throw(PreconditionViolationException);

        T dequeue() throw(PreconditionViolationException);

    private:
        LinkedList m_queue;
};

#include "Queue.hpp"

#endif
