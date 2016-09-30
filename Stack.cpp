

#include "Stack.h"

Stack::Stack(int limit)
{
    m_limit = limit;
    m_size = 0;
    top = nullptr;
}

Stack::~Stack()
{
    Node<T>* next = nullptr;

    while (top != nullptr)
    {
        next = top->getNextNode();

        delete top;

        top = next;
    }
}

int Stack::getLimit()
{
    return(m_limit);
}

void Stack::setLimit(int limit)
{
    m_limit = limit;
}

bool Stack::isEmpty()
{
    return(top == nullptr);
}

template <typename T>
void Stack::push(T newTop) throw(PreconditionViolationException)
{
    if (m_size == m_limit)
    {
        throw(PreconditionViolationException("ERROR: Stack is full."));
    }

    Node<T>* newNode = new Node<T>(newTop);

    newNode.setNextNode(top);

    top = newNode;
}

template <typename T>
T Stack::peek() throw(PreconditionViolationException)
{
    if(m_size == 0)
    {
        throw(PreconditionViolationException("ERROR: Stack is empty."));
    }

    return(top->getItem());
}

template <typename T>
T Stack::pop() throw(PreconditionViolationException)
{
    if(m_size == 0)
    {
        throw(PreconditionViolationException("ERROR: Stack is empty."));
    }

    T value = top->getItem();
    Node<T>* removedNode = top;

    top = removedNode.getNextNode();

    delete removedNode;

    return(value);
}
