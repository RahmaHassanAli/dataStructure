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
	void mergeSort();
	~LinkedList();
protected:
	int count;
	nodeType* first;
	nodeType* last;
private:
	nodeType* mergeList(nodeType* first1, nodeType* first2);
	void recMergeSort(nodeType*& head);
	void divideList(nodeType* first1, nodeType*& first2);
};

