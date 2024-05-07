#ifndef ORDEREDLINKEDLIST_H
#define ORDEREDLINKEDLIST_H
#include "LinkedList.h"

using namespace std;

template <class Type>
class orderedLinkedList: public LinkedList<Type>
{
public:
    bool search(const Type& searchItem) const;
    void insert(const Type& newItem);
    void insertFirst(const Type& newItem);
    void insertLast(const Type& newItem);
    void deleteNode(const Type& deleteItem);
};

#endif // ORDEREDLINKEDLIST_H
