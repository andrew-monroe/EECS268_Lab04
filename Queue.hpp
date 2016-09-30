


bool Queue::isEmpty()
{
    return(m_queue.getLimit() == 0);
}

void Queue::enqueue(T newBack) throw(PreconditionViolationException)
{
    m_queue.addBack(newBack);
}

T Queue::peekFront() throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("ERROR: Queue is empty."));
    }

    m_queue.getFront();
}

T Queue::dequeue() throw(PreconditionViolationException)
{
    if(isEmpty())
    {
        throw(PreconditionViolationException("ERROR: Queue is empty."));
    }

    T value = m_queue.getFront();

    m_queue.removeFront();

    return(value);

}
