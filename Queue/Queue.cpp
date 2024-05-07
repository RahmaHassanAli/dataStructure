#include "Queue.h"
#include <iostream>
#include <cassert>
using namespace std;

template <class Type>
void Queue<Type>::initializeQueue()
{
    queueFront = 0;
    queueRear = maxQueueSize - 1;
    count = 0;
}

template <class Type>
bool Queue<Type>::isEmptyQueue() const
{
    return (count == 0);
}

template <class Type>
bool Queue<Type>::isFullQueue() const
{
    return (count == maxQueueSize);
}

template <class Type>
Type Queue<Type>::front() const
{
    assert(!isEmptyQueue());
    return list[queueFront];
}



template <class Type>
Type Queue<Type>::back() const
{
    assert(!isEmptyQueue());
    return list[queueRear];
}

template <class Type>
void Queue<Type>::addQueue(const Type& newElement)
{
    if (!isFullQueue())
    {
        queueRear = (queueRear + 1) % maxQueueSize;
        count++;
        list[queueRear] = newElement;
    }
    else
        cout << "Cannot add to a full queue." << endl;
}

template <class Type>
void Queue<Type>::deleteQueue()
{
    if (!isEmptyQueue())
    {
        count--;
        queueFront = (queueFront + 1) % maxQueueSize;
    }
    else
        cout << "Cannot remove from an empty queue" << endl;
}

template <class Type>
Queue<Type>::Queue(int queueSize)
{
    if (queueSize <= 0)
    {
        cout << "Size of the array to hold the queue must "
             << "be positive." << endl;
        cout << "Creating an array of size 100." << endl;
        maxQueueSize = 100;
    }
    else
        maxQueueSize = queueSize;
    queueFront = 0;
    queueRear = maxQueueSize - 1;
    count = 0;
    list = new Type[maxQueueSize];
}

template <class Type>
Queue<Type>::~Queue()
{
    delete [] list;
}

template <class Type>
void Queue<Type>::destroyQueue()
{
    delete [] list;
}

template class Queue<int>;
template class Queue<double>;
template class Queue<string>;
