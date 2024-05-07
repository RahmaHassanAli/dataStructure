#include "LinkedList.h"
#include <iostream>
#include <cassert>
using namespace std;

template <class Type>
LinkedList<Type>::LinkedList()
{
    first = NULL;
    last = NULL;
    count = 0;
}

template <class Type>
bool LinkedList<Type>::isEmptyList() const
{
    return (first == NULL);
}

template <class Type>
void LinkedList<Type>::destroyList()
{
    nodeType<Type> *temp;
    while (first != NULL)
    {
        temp = first;
        first = first->link;
        delete temp;
    }
    last = NULL;
    count = 0;
}

template <class Type>
void LinkedList<Type>::initializeList()
{
    destroyList();
}

template <class Type>
void LinkedList<Type>::print() const
{
    nodeType<Type> *current;
    current = first;
    while (current != NULL)
    {
        cout << current->info << " ";
        current = current->link;
    }
}

template <class Type>
int LinkedList<Type>::length() const
{
    return count;
}

template <class Type>
Type LinkedList<Type>::front() const
{
    assert(first != NULL);
    return first->info;
}

template <class Type>
Type LinkedList<Type>::back() const
{
    assert(last != NULL);
    return last->info;
}

template <class Type>
void LinkedList<Type>::copyList(const LinkedList<Type>& otherList)
{
    nodeType<Type> *newNode;
    nodeType<Type> *current;
    if (first != NULL)
        destroyList();
    if (otherList.first == NULL)
    {
        first = NULL;
        last = NULL;
        count = 0;
    }
    else
    {
        current = otherList.first;
        count = otherList.count;
        first = new nodeType<Type>;
        first->info = current->info;
        first->link = NULL;
        last = first;
        current = current->link;
        while (current != NULL)
        {
            newNode = new nodeType<Type>;
            newNode->info = current->info;
            newNode->link = NULL;
            last->link = newNode;
            last = newNode;
            current = current->link;
        }
    }
}

template <class Type>
LinkedList<Type>::~LinkedList()
{
    destroyList();
}

template <class Type>
LinkedList<Type>::LinkedList(const LinkedList<Type>& otherList)
{
    first = NULL;
    copyList(otherList);
}

template <class Type>
const LinkedList<Type>& LinkedList<Type>::operator=(const LinkedList<Type>& otherList)
{
    if (this != &otherList)
    {
        copyList(otherList);
    }
    return *this;
}

template class LinkedList<int>;
template class LinkedList<double>;
template class LinkedList<string>;
