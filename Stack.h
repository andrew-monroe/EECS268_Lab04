

#ifndef Stack_h
#define Stack_h

#include "StackInterface.h"

template <typename T>
class Stack: public StackInterface
{
    public:
        Stack(int limit);

        int getLimit();

        void setLimit(int limit);

        bool isEmpty();

        bool isFull();

        void push(T newTop) throw(PreconditionViolationException);

        T peek() throw(PreconditionViolationException);

        T pop() throw(PreconditionViolationException);

    private:
        LinkedList m_stack;
        int m_limit;
};

#endif
