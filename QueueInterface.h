/*
*   Author:     Andrew Monroe
*   Date:       10/04/16
*   File Name:  QueueInterface.h
*   File Description: The base class used for Queue classes. Requires derived
        classes to include these methods: destructor, isEmpty, enqueue,
        peekFront, dequeue.
*/

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
