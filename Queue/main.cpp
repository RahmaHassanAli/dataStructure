#include <iostream>
#include "Queue.h"

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
void PrintQueue(Queue<Type> s)
{
    if (s.isEmptyQueue())
    {
        return;
    }
    Type x = s.front();
    s.deleteQueue();
    PrintQueue(s);
    cout << x << " ";
    s.addQueue(x);
}

template<typename T>
void checkLQueue()
{
    int size;
    cout<<"PLEASE eNTER SIZE OF QUEUE\n";
    cin>>size;
    Queue<T> queueObject(size);
    int choice;
    do
    {
        cout<<"\n\n Choose specific Operation of this List";
        cout<<"\n 1: Initialize the Queue to an empty state.";
        cout<<"\n 2: Determine whether the Queue is empty.";
        cout<<"\n 3: Output the data contained in Queue.";
        cout<<"\n 4: Determine whether the queue is full.";
        cout<<"\n 5: Add newItem to the queue.";
        cout<<"\n 6: Return the first element of the queue.";
        cout<<"\n 7: Return the last element of the queue.";
        cout<<"\n 8: Remove element from the queue.";
        cout<<"\n 9: Destroy Queue.";
        cout<<"\n 10: Exit\n";
        cout<<"\n Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            queueObject.initializeQueue();
            cout<<"Initialize the Queue to an empty state Done!\n";
            break;
        case 2:
            if(queueObject.isEmptyQueue())
                cout<<" THis Queue Is Empty! \n";
            else
                cout<<" THis Queue Not Empty."<<endl;
            break;
        case 3:
            if(queueObject.isEmptyQueue())
                cout<<" THis Queue Is Empty! \n";
            else
            {
                cout<<"Items Of This Queue Are : \n";
                PrintQueue(queueObject);
            }
            break;
        case 4:
            if(queueObject.isFullQueue())
                cout<<" THis Queue Is Full! \n";
            else
                cout<<" THis Queue Not Full."<<endl;
            break;
        case 5:
            queueObject.addQueue(getUserInput<T>());
            cout<<"Inserted Successfully!\n";
            break;
        case 6:
            cout<<"The first element of the Queue is : "<<queueObject.front()<<endl;
            break;
         case 7:
            cout<<"The last element of the Queue is : "<<queueObject.back()<<endl;
            break;
        case 8:
            queueObject.deleteQueue();
            cout<<"Removed Successfully!\n";
            break;
        case 9:
            queueObject.destroyQueue();
            cout<<"Destroyed Successfully!\n";
            break;
        case 10:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1 to 12." << endl;
            break;
        }
    }
    while (choice != 10 && choice != 9);

}
int main()
{
    cout<<"\n===============================  QUEUE  ==============================="<<endl;
    int type;
    cout<<"which data type of elements you need?\n";
    cout<<"\n 1 : Integer";
    cout<<"\n 2 : Double";
    cout<<"\n 3 : String\n";
    cin>>type;

    if(type == 1)
        checkLQueue<int>();
    else if(type == 2)
        checkLQueue<double>();
    else if(type == 3)
        checkLQueue<string>();
    else
        cout<<"Wrong Number\n";
    return 0;
}


