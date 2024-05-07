#ifndef QUEUE_H
#define QUEUE_H

template <class Type>
class Queue
{
public:
    const Queue<Type>& operator=(const Queue<Type>&);
    bool isEmptyQueue() const;
    bool isFullQueue() const;
    void initializeQueue();
    Type front() const;
    Type back() const;
    void addQueue(const Type& queueElement);
    void deleteQueue();
    Queue(int queueSize = 100);
    void destroyQueue();
    ~Queue();
private:
    int maxQueueSize;
    int count;
    int queueFront;
    int queueRear;
    Type *list;
};
#endif // QUEUE_H
