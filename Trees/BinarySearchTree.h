#pragma once
#include "BinaryTree.h"

template <class elemType>
class BinarySearchTree:public BinaryTree<elemType>
{
public:
	bool search(const elemType& searchItem) const;
	void insert(const elemType& insertItem);
	void deleteNode(const elemType& deleteItem);
private:
	void deleteFromTree(binaryTreeNode<elemType>*& p);
};

