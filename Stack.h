

#ifndef Stack_h
#define Stack_h

#include "StackInterface.h"
#include "Node.h"


template <typename T>
class Stack: public StackInterface<T>
{
    public:

        Stack();

        ~Stack();

        int getLimit() const;

        void setLimit(int limit);

        bool isEmpty() const;

        bool isFull();

        void push(T newTop) throw(PreconditionViolationException);

        T peek() const throw(PreconditionViolationException);

        void pop() throw(PreconditionViolationException);

    private:
        Node<T>* m_top;
        int m_limit;
        int m_size;
};

#include "Stack.hpp"

#endif
