

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

vector<int> sortUsingInsertionSort(vector<int> list)
{
    int firstOutOfOrder, location;
    int temp;
    for (firstOutOfOrder = 1; firstOutOfOrder < list.size();
        firstOutOfOrder++)
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            temp = list[firstOutOfOrder];
            location = firstOutOfOrder;
            do
            {
                list[location] = list[location - 1];
                location--;
            } while (location > 0 && list[location - 1] > temp);
            list[location] = temp;
        }
    return list;
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
    cout << "The list before sorting:" << endl;
    printList(list);
    cout << endl;
    cout << "The list after using INSERTION SORT ARRAY BASED:" << endl;
    list = sortUsingInsertionSort(list);
    printList(list);
    cout << endl;
}

