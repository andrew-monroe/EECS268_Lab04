

template <typename T>
Stack<T>::Stack()
{
    m_top = nullptr;
    m_limit = 0;
    m_size = 0;
}

template <typename T>
Stack<T>::~Stack()
{
    Node<T>* temp = m_top;

    while (m_top != nullptr)
    {
        temp = m_top->getNextNode();

        delete m_top;

        m_top = temp;
    }
}

template <typename T>
int Stack<T>::getLimit() const
{
    return(m_limit);
}

template <typename T>
void Stack<T>::setLimit(int limit)
{
    m_limit = limit;
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return(m_top == nullptr);
}

template <typename T>
bool Stack<T>::isFull()
{
    return(m_size == m_limit);
}

template <typename T>
void Stack<T>::push(T newTop) throw(PreconditionViolationException)
{
    if (isFull())
    {
        throw(PreconditionViolationException("Push attempted on full stack."));
    }

    Node<T>* top = new Node<T>(newTop);

    top->setNextNode(m_top);

    m_top = top;

    m_size++;
}

template <typename T>
T Stack<T>::peek() const throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("Peek attempted on empty stack."));
    }

    return(m_top->getItem());
}

template <typename T>
T Stack<T>::pop() throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("Pop attempted on empty stack."));
    }

    Node<T>* removedNode = m_top;

    T value = m_top->getItem();

    m_top = m_top->getNextNode();

    delete removedNode;

    m_size--;

    return(value);
}
