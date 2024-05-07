

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

vector<int> swap(vector<int> list, int first, int second)
{
    int temp;
    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
    return list;
}
vector<int> sort(vector<int> list)
{
    int sorted = 1;
    for (int loc = 0; loc < (list.size()) - 1; loc++)
    {
        int flag = 0;
        for (size_t i = 0; i < (list.size()) -i-1; i++)
        {
            if (list[i] > list[i + 1]) {
                list = swap(list, i + 1, i);
                flag = 1;
            }              
        }
        if (flag == 0) {
            cout<< "This List Is Ordered From Element "<<loc+1<<endl;
                break;
        }
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
    cout << "The list before usng BUBBLE SORT:" << endl;
    printList(list);
    cout << endl;
    cout << "The list after usng BUBBLE SORT:" << endl;
    list = sort(list);
    printList(list);
    cout << endl;
}

