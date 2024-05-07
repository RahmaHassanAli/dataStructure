#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    first = NULL;
    last = NULL;
    count = 0;
}
void LinkedList::print() const
{
    nodeType* current;
    current = first;
    while (current != NULL)
    {
        cout << current->info << " ";
        current = current->link;
    }
}
nodeType* LinkedList::mergeList(nodeType* first1, nodeType* first2)
{
    nodeType* lastSmall;
    nodeType* newHead;
    if (first1 == NULL)
        return first2;
    else if (first2 == NULL)
        return first1;
    else
    {
        if (first1->info < first2->info)
        {
            newHead = first1;
            first1 = first1->link;
            lastSmall = newHead;
        }
        else
        {
            newHead = first2;
            first2 = first2->link;
            lastSmall = newHead;
        }
        while (first1 != NULL && first2 != NULL)
        {
            if (first1->info < first2->info)
            {
                lastSmall->link = first1;
                lastSmall = lastSmall->link;
                first1 = first1->link;
            }
            else
            {
                lastSmall->link = first2;
                lastSmall = lastSmall->link;
                first2 = first2->link;
            }
        } 
        if (first1 == NULL)
            lastSmall->link = first2;
        else 
            lastSmall->link = first1;
        return newHead;
    }
}

void LinkedList::divideList(nodeType* first1,nodeType* &first2)
{
    nodeType* middle;
    nodeType* current;
    if (first1 == NULL) 
        first2 = NULL;
    else if (first1->link == NULL) 
        first2 = NULL;
    else
    {
        middle = first1;
        current = first1->link;
        if (current != NULL)
            current = current->link;
        while (current != NULL)
        {
            middle = middle->link;
            current = current->link;
            if (current != NULL)
                current = current->link;
        }
        first2 = middle->link;
        middle->link = NULL;
    }
}

void LinkedList::recMergeSort(nodeType *&head)
{
    nodeType* otherHead;
    if (head != NULL) 
        if (head->link != NULL) 
        {
            divideList(head, otherHead);
            recMergeSort(head);
            recMergeSort(otherHead);
            head = mergeList(head, otherHead);
        }
}

void LinkedList::mergeSort()
{
    recMergeSort(first);
    if (first == NULL)
        last = NULL;
    else
    {
        last = first;
        while (last->link != NULL)
            last = last->link;
    }
}
void LinkedList::insertLast(const int newItem)
{
    nodeType* newNode;
    newNode = new nodeType;
    newNode->info = newItem;
    newNode->link = NULL;
    if (first == NULL)
    {
        first = newNode;
        last = newNode;
        count++;
    }
    else
    {
        last->link = newNode;
        last = newNode;
        count++;
    }
}
LinkedList::~LinkedList()
{
    nodeType* temp;
    while (first != NULL)
    {
        temp = first;
        first = first->link;
        delete temp;
    }
    last = NULL;
    count = 0;
}