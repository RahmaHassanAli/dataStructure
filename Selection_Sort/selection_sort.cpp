

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printList(vector<int> list) {
    for (size_t i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}
int minLocation(vector<int> list ,int first, int last)
{
    int minIndex;
    minIndex = first;
    for (int loc = first + 1; loc <= last; loc++)
        if (list[loc] < list[minIndex])
            minIndex = loc;
    return minIndex;
}
vector<int> swap(vector<int> list,int first, int second)
{
   int temp;
    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
    return list;
}
vector<int> selectionSort(vector<int> list)
{
    int minIndex;
    for (int loc = 0; loc < (list.size() )- 1; loc++)
    {
        minIndex = minLocation(list,loc, (list.size() )- 1);
        list=swap(list,loc, minIndex);
    }
    return list;
}
int main()
{
    vector <int> list;
    int num; 
    cout << " Enter numbers You want to sort , ending with -999 "<< endl; 
    cin >> num; 
    while (num != -999) 
    { 
        list.push_back(num); 
        cin >> num; 
    }
    cout << "The list before sorting:" << endl; 
    printList(list);
    cout << endl; 
    cout << "The list after sorting:" << endl; 
    list=selectionSort(list);
    printList(list);
    cout << endl;
}

