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

void LinkedList::sortUsinglinkedInsertionSort()
{
    nodeType* lastInOrder;
    nodeType* firstOutOfOrder;
    nodeType* current;
    nodeType* trailCurrent;
    lastInOrder = first;
    if (first == NULL)
        cerr << "Cannot sort an empty list." << endl;
    else if (first->link == NULL)
        cout << "The list is of length 1. "
        << "It is already in order." << endl;
    else
        while (lastInOrder->link != NULL)
        {
            firstOutOfOrder = lastInOrder->link;
            if (firstOutOfOrder->info < first->info)
            {
                lastInOrder->link = firstOutOfOrder->link;
                firstOutOfOrder->link = first;
                first = firstOutOfOrder;
            }
            else
            {
                trailCurrent = first;
                current = first->link;
                while (current->info < firstOutOfOrder->info)
                {
                    trailCurrent = current;
                    current = current->link;
                }
                if (current != firstOutOfOrder)
                {
                    lastInOrder->link = firstOutOfOrder->link;
                    firstOutOfOrder->link = current;
                    trailCurrent->link = firstOutOfOrder;
                }
                else
                    lastInOrder = lastInOrder->link;
            }
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