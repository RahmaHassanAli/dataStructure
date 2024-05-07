# Implementation Of Single LinkedList
 A linked list is a collection of components, called nodes. Every node (except the last node)
contains the address of the next node. Thus, every node in a linked list has two components:
one to store the relevant information (that is, data) and one to store the address, called the
link, of the next node in the list. The address of the first node in the list is stored in a separate
location, called the head or first.

## Advantages Of Linked List:
- **Dynamic data structure:** A linked list is a dynamic arrangement so it can grow and shrink at runtime by allocating and deallocating memory. So there is no need to give the initial size of the linked list.
No memory wastage: In the Linked list, efficient memory utilization can be achieved since the size of the linked list increase or decrease at run time so there is no memory wastage and there is no need to pre-allocate the memory.
- **Implementation:** Linear data structures like stacks and queues are often easily implemented using a linked list.
Insertion and Deletion Operations: Insertion and deletion operations are quite easier in the linked list. There is no need to shift elements after the insertion or deletion of an element only the address present in the next pointer needs to be updated. 
- **Flexible:** This is because the elements in Linked List  are not stored in contiguous memory locations unlike the array.
Efficient for large data: When working with large datasets linked lists play a crucial role as it can grow and shrink dynamically.
- **Scalability:** Contains the ability to add or remove elements at any position.

## Disadvantages Of Linked List:
Memory usage: More memory is required in the linked list as compared to an array. Because in a linked list, a pointer is also required to store the address of the next element and it requires extra memory for itself.
- **Traversal:** In a Linked list traversal is more time-consuming as compared to an array. Direct access to an element is not possible in a linked list as in an array by index. For example, for accessing a node at position n, one has to traverse all the nodes before it.
- **Reverse Traversing:** In a singly linked list reverse traversing is not possible, but in the case of a doubly-linked list, it can be possible as it contains a pointer to the previously connected nodes with each node. For performing this extra memory is required for the back pointer hence, there is a wastage of memory.
- **Random Access:** Random access is not possible in a linked list due to its dynamic memory allocation.
- **Lower efficiency at times:** For certain operations, such as searching for an element or iterating through the list, can be slower in a linked list.
- **Complex implementation:**  The linked list implementation is more complex when compared to array. It requires a complex programming understanding.
- **Difficult to share data:** This is because it is not possible to directly access the memory address of an element in a linked list.
- **Not suited for small dataset:** Cannot provide any significant benefits on small dataset compare to that of an array.
 ## Types Of Linked List
   - Singly Linked List
   - Doubly or Two Way Linked List  
   - Circular Linked List:
   
## The basic operations on linked lists are as follows:
1. Initialize the list.
2. Determine whether the list is empty.
3. Print the list.
4. Find the length of the list.
5. Destroy the list.
6. Retrieve the info contained in the first node.
7. Retrieve the info contained in the last node.
8. Search the list for a given item.
9. Insert an item in the list.
10. Delete an item from the list.
11. Make a copy of the linked list.

## LinkedList Can be Ordered List Or UnOrdered List 
 The algorithms to implement the operations search, insert, and remove slightly differ for sorted and unsorted lists
 *** SO: 
  - define the class *linkedList* to implement the basic operations on a
  linked list as an abstract class
  - Using the principal of inheritance, we derive two classes—
  *unOrderedList* and *orderedLinkedList*

 ## -How To Run Code  
    
   1-download all files in the repositry   
   
   2-make sure that you put all files in one folder  
   
   3-install visual studio in your computer     
   
   4-after open it go to Extension and install C/C++ Extension Pack   
   
   5-download a c++ compiler such as mingw   
   
   6-open the folder in visual studio  
   
   7-go to terminal in visual studio  
   
   8-go to terminal and run this command in it    
      **g++ main.cpp OrderedLinkedList.cpp LinkedList.cpp  unOrderedList.cpp**     
      
   9-Finally run this command   
        **./a.exe**    
        
   ***After all steps the code will run and display Linked List*** 
# dataStructure
