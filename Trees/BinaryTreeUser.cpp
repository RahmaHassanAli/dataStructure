

#include <iostream>
#include "BinarySearchTree.h"
#include "BinaryTree.h"

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
void testTree()
{
    BinarySearchTree<T> bstree;
    int choice;
    do
    {
        cout << "\n\n Choose specific Operation of this List";
        cout << "\n 1: Insert an item in the binary tree";
        cout << "\n 2: Determine whether the binary tree is empty.";
        cout << "\n 3: Delete an item from the binary tree.";
        cout << "\n 4: Search the binary tree for a particular item..";
        cout << "\n 5: Find the height of the binary tree.";
        cout << "\n 6: Find the number of nodes in the binary tree.";
        cout << "\n 7: inorder Traverse the binary tree.";
        cout << "\n 8: preorder Traverse the binary tree.";
        cout << "\n 9: postorder Traverse the binary tree.";
        cout << "\n 10: delete all the nodes from the tree.";
        cout << "\n 11: Exit\n";
        cout << "\n Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            bstree.insert(getUserInput<T>());
            cout << "Inserted Successfully!\n";
            break;
        case 2:
            if (bstree.isEmpty())
                cout << " THis TREE Is Empty! \n";
            else
                cout << " THis TREE Not Empty." << endl;
            break;
        case 3:
            bstree.deleteNode(getUserInput<T>());
            cout << "Removed Successfully!\n";
            break;
        case 4:
            if (bstree.search(getUserInput<T>()))
                cout << "Found \n";
            else
                cout << " NOT FOUND." << endl;
            break;
        case 5:           
            cout << "The Height Is :"<< bstree.treeHeight()<<"\n";
            break;
        case 6:
            cout << "The number of nodes in the binary tree :";
            break;
        case 7:
            cout << "Inorder Traverse : \n";
            bstree.inorderTraversal();
            break;
        case 8:
            cout << "preOrder Traverse : \n";
            bstree.preorderTraversal();
            break;
        case 9:
            cout << "POSTOrder Traverse : \n";
           bstree.postorderTraversal();
            break;
        case 10:
            bstree.destroyTree();
            cout<< "TREE DESTROYED..." << endl;
            break;
        case 11:
            bstree.destroyTree();
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1 to 12." << endl;
            break;
        }
    } while (choice != 11);

}
int main()
{
    cout << "\n===============================  Binary Search Tree  ===============================" << endl;
    int type;
    cout << "which data type of elements you need?\n";
    cout << "\n 1 : Integer";
    cout << "\n 2 : Double";
    cout << "\n 3 : String\n";
    cin >> type;

    if (type == 1)
        testTree<int>();
    else if (type == 2)
        testTree<double>();
    else if (type == 3)
        testTree<string>();
    else
        cout << "Wrong Number\n";
}

