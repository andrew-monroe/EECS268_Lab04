

#ifndef StackInterface_h
#define StackInterface_h

#include "PreconditionViolationException.h"
#include "LinkedList.h"

template <typename T>
class StackInterface
{
    public:
        virtual bool isEmpty() = 0;

        virtual void push(T newTop) throw(PreconditionViolationException) = 0;

        virtual T peek() throw(PreconditionViolationException) = 0;

        virtual T pop() throw(PreconditionViolationException) = 0;
};

#endif
