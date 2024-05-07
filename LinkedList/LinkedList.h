#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};

template <class Type>
class LinkedList
{
public:
    const LinkedList<Type>& operator=(const LinkedList<Type>&);
    void initializeList();
    bool isEmptyList() const;
    void print() const;
    int length() const;
    void destroyList();
    Type front() const;
    Type back() const;
    virtual bool search(const Type& searchItem) const = 0;
    virtual void insertFirst(const Type& newItem) = 0;
    virtual void insertLast(const Type& newItem) = 0;
    virtual void deleteNode(const Type& deleteItem) = 0;
    LinkedList();
    LinkedList(const LinkedList<Type>& otherList);


     ~LinkedList();

protected:
    int count;
    nodeType<Type> *first;
    nodeType<Type> *last;

private:
    void copyList(const LinkedList<Type>& otherList);
};

#endif // LINKEDLIST_H
