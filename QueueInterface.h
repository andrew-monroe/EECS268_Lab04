

#ifndef QueueInterface_h
#define QueueInterface_h

#include "PreconditionViolationException.h"
#include "Node.h"

template <typename T>
class QueueInterface
{
    public:

        virtual ~QueueInterface() {};

        virtual bool isEmpty() const = 0;

        virtual void enqueue(T newBack) throw(PreconditionViolationException) = 0;

        virtual T peekFront() const throw(PreconditionViolationException) = 0;

        virtual void dequeue() throw(PreconditionViolationException) = 0;
};

#endif
