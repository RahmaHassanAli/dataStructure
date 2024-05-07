#pragma once

struct nodeType
{
	int info;
	nodeType* link;
};
class LinkedList
{
public:
	void print() const;
	LinkedList();
	void insertLast(const int newItem);
	void sortUsinglinkedInsertionSort();
	~LinkedList();
protected:
	int count;
	nodeType* first; 
	nodeType* last;
};

