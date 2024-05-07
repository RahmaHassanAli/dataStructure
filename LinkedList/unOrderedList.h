#ifndef UNORDEREDLIST_H
#define UNORDEREDLIST_H
#include "LinkedList.h"

using namespace std;

template <class Type>
class unOrderedList : public LinkedList<Type>
{
public:
    bool search(const Type& searchItem) const;
    void insertFirst(const Type& newItem);
    void insertLast(const Type& newItem);
    void deleteNode(const Type& deleteItem);

};

#endif // UNORDEREDLIST_H
