

#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;


int main()
{
    LinkedList list;
    int num;
    cout << " Enter numbers You want to sort , ending with -999 " << endl;
    cin >> num;
    while (num != -999)
    {
        list.insertLast(num);
        cin >> num;
    }
    cout << "The list before sorting:" << endl;
    list.print();
    cout << endl;
    cout << "The list after using INSERTION SORT LINKED BASED:" << endl;
    list.sortUsinglinkedInsertionSort();
    list.print();
    cout << endl;
}

