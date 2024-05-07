

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printList(vector<int> &list) {
    for (size_t i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}
void swap(vector<int> &list, int first, int second)
{
    int temp;
    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
}
int partition(vector<int> &list,int first, int last)
{
    int index, smallIndex,pivot;
    swap(list,first, (first + last) / 2);
    pivot = list[first];
    smallIndex = first;
    for (index = first + 1; index <= last; index++)
        if (list[index] < pivot)
        {
            smallIndex++;
            swap(list,smallIndex, index);
        }
    swap(list,first, smallIndex);
    return smallIndex;
}

void sortUsingQuickSort(vector<int> &list,int first,int last)
{
   
        int pivotLocation;
        if (first < last)
        {
            pivotLocation = partition(list,first, last);
            sortUsingQuickSort(list,first, pivotLocation - 1);
            sortUsingQuickSort(list,pivotLocation + 1, last);
        }
}
int main()
{
    vector <int> list;
    int num;
    cout << " Enter numbers You want to sort , ending with -999 " << endl;
    cin >> num;
    while (num != -999)
    {
        list.push_back(num);
        cin >> num;
    }
    cout << "The list before usng QUICK SORT:" << endl;
    printList(list);
    cout << endl;
    cout << "The list after usng QUICK SORT:" << endl;
    sortUsingQuickSort(list,0,list.size()-1);
    printList(list);
    cout << endl;
}

