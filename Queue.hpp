

template <typename T>
Queue<T>::Queue()
{
    m_front = nullptr;
}


template <typename T>
Queue<T>::~Queue()
{
    Node<T>* temp = m_front;

    while (m_front != nullptr)
    {
        temp = m_front->getNextNode();
        delete m_front;
        m_front = temp;
    }
}

template <typename T>
bool Queue<T>::isEmpty() const
{
    return(m_front == nullptr);
}

template <typename T>
void Queue<T>::enqueue(T newBack) throw(PreconditionViolationException)
{
    Node<T>* temp = m_front;

    if(isEmpty())
    {
        m_front = new Node<T>(newBack);
    }
    else
    {
        while(temp->getNextNode() != nullptr)
        {
            temp = temp->getNextNode();
        }

        temp->setNextNode(new Node<T>(newBack));
    }
}

template <typename T>
T Queue<T>::peekFront() const throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("Peek attempted on empty queue."));
    }

    return(m_front->getItem());
}

template <typename T>
T Queue<T>::dequeue() throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("Dequeue attempted on empty queue"));
    }

    Node<T>* temp = m_front;

    T value = m_front->getItem();

    m_front = m_front->getNextNode();

    delete temp;

    return(value);

}
