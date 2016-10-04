/*
*   Author:     Andrew Monroe
*   Date:       10/04/16
*   File Name:  StackInterface
*   File Description: The base class used for Stack classes. Requires derived
        classes to include these methods: destructor, isEmpty, push, peek, and
        pop.
*/

#ifndef StackInterface_h
#define StackInterface_h

#include "PreconditionViolationException.h"
#include "Node.h"

template <typename T>
class StackInterface
{
    public:

        virtual ~StackInterface() {};

        virtual bool isEmpty() const = 0;

        virtual void push(T newTop) throw(PreconditionViolationException) = 0;

        virtual T peek() const throw(PreconditionViolationException) = 0;

        virtual void pop() throw(PreconditionViolationException) = 0;
};

#endif
