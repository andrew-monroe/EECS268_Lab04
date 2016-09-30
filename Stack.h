

#ifndef Stack_h
#define Stack_h

#include "StackInterface.h"

template <typename T>
class Stack: public StackInterface
{
    public:
        Stack(int limit);

        ~Stack();

        int getLimit();

        void setLimit(int limit);

        bool isEmpty();

        void push(T newTop) throw(PreconditionViolationException);

        T peek() throw(PreconditionViolationException);

        T pop() throw(PreconditionViolationException);

    private:
        int m_limit;
        int m_size;
        Node<T>* top;
};

#endif
