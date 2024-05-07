#include <iostream>
#include "unOrderedList.h"
#include "OrderedLinkedList.h"
#include <string>
using namespace std;


template<typename T>
T getUserInput()
{
    T myVar;
    cout << "Enter a value: ";
    cin >> myVar;
    return myVar;
}

template<typename T>
void checkList(int num)
{

    unOrderedList<T> unOrderLinkedList;

    orderedLinkedList<T> orderLinkedList;
    int choice;
    do
    {
        cout<<"\n\n Choose specific Operation of this List";
        cout<<"\n 1: Initialize the list to an empty state.";
        cout<<"\n 2: Determine whether the list is empty.";
        cout<<"\n 3: Output the data contained in each node.";
        cout<<"\n 4: Return the number of nodes in the list.";
        cout<<"\n 5: Return the first element of the list.";
        cout<<"\n 6: Return the last element of the list.";
        cout<<"\n 7: Determine whether searchItem is in the list.";
        cout<<"\n 8: Insert newItem at the beginning of the list.";
        cout<<"\n 9: Insert newItem at the end of the list.";
        cout<<"\n 10: Delete Item from the list.";
        cout<<"\n 11: delete all the nodes from the list.";
        cout<<"\n 12: Exit\n";

        cout<<"\n Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            if(num == 1)
                unOrderLinkedList.initializeList();
            else
                orderLinkedList.initializeList();
            cout<<"Initialize the list to an empty state Done!\n";
            break;
        case 2:
            if(num == 1)
            {
                if(unOrderLinkedList.isEmptyList())
                    cout<<" THis List Is Empty! \n";
                else
                    cout<<" THis List Contains : "<<unOrderLinkedList.length()<<" Items\n";
            }
            else
            {
                if(orderLinkedList.isEmptyList())
                    cout<<" THis List Is Empty! \n";
                else
                    cout<<" THis List Contains : "<<orderLinkedList.length()<<" Items\n";
            }
            break;
        case 3:
            if(num == 1)
            {
                if(unOrderLinkedList.isEmptyList())
                    cout<<" THis List Is Empty! \n";
                else
                {
                    cout<<"Items Of This List Are : \n";
                    unOrderLinkedList.print();
                }
            }
            else
            {
                if(orderLinkedList.isEmptyList())
                    cout<<" THis List Is Empty! \n";
                else
                {
                    cout<<"Items Of This List Are : \n";
                    orderLinkedList.print();
                }
            }
            break;
        case 4:
            if(num == 1)
                cout<<" THis List Contains : "<<unOrderLinkedList.length()<<" Items\n";
            else
                cout<<" THis List Contains : "<<orderLinkedList.length()<<" Items\n";
            break;
        case 5:
            if(num == 1)
                cout<<" the first element of the list Is : "<<unOrderLinkedList.front()<<" Items\n";
            else
                cout<<"  the first element of the list Is : "<<orderLinkedList.front()<<" Items\n";
            break;
        case 6:
            if(num == 1)
                cout<<" the last element of the list Is : "<<unOrderLinkedList.back()<<" Items\n";
            else
                cout<<" the last element of the list Is : "<<orderLinkedList.back()<<" Items\n";
            break;
        case 7:
            if(num == 1)
            {
                if(unOrderLinkedList.search(getUserInput<T>()))
                    cout<<" This element Fount\n";
                else
                    cout<<" This element Not Fount\n";
            }
            else
            {
                if(orderLinkedList.search(getUserInput<T>()))
                    cout<<" This element Fount\n";
                else
                    cout<<" This element Not Fount\n";
            }
            break;
        case 8:
            if(num == 1)
                unOrderLinkedList.insertFirst(getUserInput<T>());
            else
                orderLinkedList.insertFirst(getUserInput<T>());
            cout<<"Inserted Successfully!\n";

            break;
        case 9:
            if(num == 1)
                unOrderLinkedList.insertLast(getUserInput<T>());
            else
                orderLinkedList.insertLast(getUserInput<T>());
            cout<<"Inserted Successfully!\n";
            break;
        case 10:
            if(num ==1 )
                unOrderLinkedList.deleteNode(getUserInput<T>());
            else
                orderLinkedList.deleteNode(getUserInput<T>());
            break;
        case 11:
            if(num == 1)
                unOrderLinkedList.destroyList();
            else
                orderLinkedList.destroyList();
            cout<<"Destroyed Successfully!\n";
            break;
        case 12:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1 to 12." << endl;
            break;
        }
    }
    while (choice != 12);
}
int main()
{
    cout<<"\n===============================   LinkedList  ===============================\n"<<endl;
    int num,type;
    cout<<"\n 1 : Unordered LinkedList";
    cout<<"\n 2 : Ordered LinkedList\n";
    cin>>num;
    if(num == 1)
        cout<<"\n****************************  Unordered LinkedList  ****************************\n\n";
    else if(num == 2)
        cout<<"\n****************************  Ordered LinkedList  ****************************\n\n";
    else
    {
        cout<<"Wrong Number\n";
        return 0;
    }

    cout<<"which data type of elements you need?\n";
    cout<<"\n 1 : Integer";
    cout<<"\n 2 : Double";
    cout<<"\n 3 : String\n";
    cin>>type;

    if(type == 1)
        checkList<int>(num);
    else if(type == 2)
        checkList<double>(num);
    else if(type == 3)
        checkList<string>(num);
    else
        cout<<"Wrong Number\n";


    return 0;
}
