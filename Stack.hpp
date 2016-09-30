


Stack::Stack(int limit)
{
    m_limit = limit;
}

Stack::~Stack()
{
    
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
    return(m_stack.getLength() == 0);
}

bool Stack::isFull()
{
    return(m_stack.getLength() == m_limit);
}

template <typename T>
void Stack::push(T newTop) throw(PreconditionViolationException)
{
    if (isFull())
    {
        throw(PreconditionViolationException("ERROR: Stack is full."));
    }

    m_stack->addFront(newTop);
}

template <typename T>
T Stack::peek() throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("ERROR: Stack is empty."));
    }

    return(m_stack->getFront());
}

template <typename T>
T Stack::pop() throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("ERROR: Stack is empty."));
    }

    T value = m_stack.getFront();

    m_stack.removeFront();

    return(value);
}
