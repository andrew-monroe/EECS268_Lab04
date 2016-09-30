

#ifndef QueueInterface_h
#define QueueInterface_h

#include "PreconditionViolationException.h"
#include "LinkedList.h"

template <typename T>
class QueueInterface
{
    public:
        virtual bool isEmpty() = 0;

        virtual void enqueue(T newBack) throw(PreconditionViolationException) = 0;

        virtual T peekFront() throw(PreconditionViolationException) = 0;

        virtual T dequeue() throw(PreconditionViolationException) = 0;
};

#endif
