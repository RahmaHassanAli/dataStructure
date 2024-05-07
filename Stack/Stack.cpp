#include "Stack.h"
#include <iostream>
#include <cassert>

using namespace std;

template <class Type>
void Stack<Type>::initializeStack()
{
    stackTop = 0;
}

template <class Type>
bool Stack<Type>::isEmptyStack() const
{
    return(stackTop == 0);
}

template <class Type>
bool Stack<Type>::isFullStack() const
{
    return(stackTop == maxStackSize);
}

template <class Type>
void Stack<Type>::push(const Type& newItem)
{
    if (!isFullStack())
    {
        list[stackTop] = newItem;
        stackTop++;
    }
    else
        cout << "Cannot add to a full stack." << endl;
}

template <class Type>
Type Stack<Type>::top() const
{
    assert(stackTop != 0);
    return list[stackTop - 1];

}

template <class Type>
void Stack<Type>::pop()
{
    if (!isEmptyStack())
        stackTop--;
    else
        cout << "Cannot remove from an empty stack." << endl;
}

template <class Type>
void Stack<Type>::copyStack(const Stack<Type>& otherStack)
{
    delete [] list;
    maxStackSize = otherStack.maxStackSize;
    stackTop = otherStack.stackTop;
    list = new Type[maxStackSize];
//copy otherStack into this stack
    for (int j = 0; j < stackTop; j++)
        list[j] = otherStack.list[j];
}

template <class Type>
Stack<Type>::Stack(int stackSize)
{
    if (stackSize <= 0)
    {
        cout << "Size of the array to hold the stack must "
             << "be positive." << endl;
        cout << "Creating an array of size 100." << endl;
        maxStackSize = 100;
    }
    else
        maxStackSize = stackSize;
    list = new Type[maxStackSize];
}


template <class Type>
Stack<Type>::Stack(const Stack<Type>& otherStack)
{
    list = NULL;
    copyStack(otherStack);
}

template <class Type>
const Stack<Type>& Stack<Type>::operator=(const Stack<Type>& otherStack)
{
    if (this != &otherStack)
        copyStack(otherStack);
    return *this;
}

template <class Type>
void Stack<Type>::destroyStack()
{
delete [] list;

}

template <class Type>
Stack<Type>::~Stack() //destructor
{
delete [] list; //deallocate the memory occupied
//by the array
}
template class Stack<int>;
template class Stack<double>;
template class Stack<string>;
