#include <iostream>
#include "Stack.h"

using namespace std;



template<typename T>
T getUserInput()
{
    T myVar;
    cout << "Enter a value: ";
    cin >> myVar;
    return myVar;
}


template <class Type>
void PrintStack(Stack<Type> s)
{
    if (s.isEmptyStack())
    {
        return;
    }
    Type x = s.top();
    s.pop();
    PrintStack(s);
    cout << x << " ";
    s.push(x);
}

template<typename T>
void checkLStack()
{
    int size;
    cout<<"PLEASE eNTER SIZE OF STACK\n";
    cin>>size;
    Stack<T> stackObject(size);
    int choice;
    do
    {
        cout<<"\n\n Choose specific Operation of this List";
        cout<<"\n 1: Initialize the Stack to an empty state.";
        cout<<"\n 2: Determine whether the Stack is empty.";
        cout<<"\n 3: Output the data contained in each node.";
        cout<<"\n 4: Determine whether the stack is full.";
        cout<<"\n 5: Add newItem to the stack.";
        cout<<"\n 6: Return the top element of the stack.";
        cout<<"\n 7: Remove the top element of the stack.";
        cout<<"\n 8: delete all the nodes from the list.";
        cout<<"\n 9: Exit\n";
        cout<<"\n Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            stackObject.initializeStack();
            cout<<"Initialize the Stack to an empty state Done!\n";
            break;
        case 2:
            if(stackObject.isEmptyStack())
                cout<<" THis Stack Is Empty! \n";
            else
                cout<<" THis Stack Not Empty."<<endl;
            break;
        case 3:
            if(stackObject.isEmptyStack())
                cout<<" THis Stack Is Empty! \n";
            else
            {
                cout<<"Items Of This Stack Are : \n";
                PrintStack(stackObject);
            }
            break;
        case 4:
            if(stackObject.isFullStack())
                cout<<" THis Stack Is Full! \n";
            else
                cout<<" THis Stack Not Full."<<endl;
            break;
        case 5:
            stackObject.push(getUserInput<T>());
            cout<<"Inserted Successfully!\n";
            break;
        case 6:
            cout<<"The top element of the stack is : "<<stackObject.top()<<endl;
            break;
        case 7:
            stackObject.pop();
            cout<<"Removed Successfully!\n";
            break;
        case 8:
            stackObject.destroyStack();
            cout<<"Destroyed Successfully!\n";
            break;
        case 9:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1 to 12." << endl;
            break;
        }
    }
    while (choice != 9);

}
int main()
{
    cout<<"\n===============================  STACK  ==============================="<<endl;
    int type;
    cout<<"which data type of elements you need?\n";
    cout<<"\n 1 : Integer";
    cout<<"\n 2 : Double";
    cout<<"\n 3 : String\n";
    cin>>type;

    if(type == 1)
        checkLStack<int>();
    else if(type == 2)
        checkLStack<double>();
    else if(type == 3)
        checkLStack<string>();
    else
        cout<<"Wrong Number\n";
    return 0;
}
