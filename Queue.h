/*
*   Author:     Andrew Monroe
*   Date:       10/04/16
*   File Name:  Queue.h
*   File Description: Class derived from QueueInterface base class. Typical
        queue-style data structure.
*/

#ifndef Queue_h
#define Queue_h

#include "QueueInterface.h"
#include "Node.h"

template <typename T>
class Queue: public QueueInterface<T>
{
    public:

        Queue();

        ~Queue();

        bool isEmpty() const;

        void enqueue(T newBack) throw(PreconditionViolationException);

        T peekFront() const throw(PreconditionViolationException);

        void dequeue() throw(PreconditionViolationException);

    private:
        Node<T>* m_front;
};

#include "Queue.hpp"

#endif
