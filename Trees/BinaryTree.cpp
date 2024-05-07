#include "BinaryTree.h"
#include <iostream>
using namespace std;

template <class elemType>
bool BinaryTree<elemType>::isEmpty() const
{
	return (root == NULL);
}

template <class elemType>
BinaryTree<elemType>::BinaryTree()
{
	root = NULL;
}

template <class elemType>
void BinaryTree<elemType>::inorderTraversal() const
{
inorder(root);
}

template <class elemType>
void BinaryTree<elemType>::preorderTraversal() const
{
preorder(root);
}

template <class elemType>
void BinaryTree<elemType>::postorderTraversal() const
{
postorder(root);
}

template <class elemType>
int BinaryTree<elemType>::treeHeight() const
{
	return height(root);
}

template <class elemType>
void BinaryTree<elemType>::inorder(binaryTreeNode<elemType>* p) const
{
	if (p != NULL)
	{
		inorder(p->llink);
		cout << p->info << " ";
		inorder(p->rlink);
	}
}

template <class elemType>
void BinaryTree<elemType>::preorder(binaryTreeNode<elemType> *p) const
{
	if (p != NULL)
	{
		cout << p->info << " ";
		preorder(p->llink);
		preorder(p->rlink);
	}
}

template <class elemType>
void BinaryTree<elemType>::postorder(binaryTreeNode<elemType> *p) const
{
	if (p != NULL)
	{
		postorder(p->llink);
		postorder(p->rlink);
		cout << p->info << " ";
	}
}

template <class elemType>
int BinaryTree<elemType>::height(binaryTreeNode<elemType> *p) const
{
	if (p == NULL)
		return 0;
	else
		return 1 + max(height(p->llink), height(p->rlink));
}

template <class elemType>
int BinaryTree<elemType>::max(int x, int y) const
{
	if (x >= y)
		return x;
	else
		return y;
}

template <class elemType>
void BinaryTree<elemType>::copyTree(binaryTreeNode<elemType>*& copiedTreeRoot,binaryTreeNode<elemType>* otherTreeRoot)
{
	if (otherTreeRoot == NULL)
		copiedTreeRoot = NULL;
	else
	{
		copiedTreeRoot = new binaryTreeNode<elemType>;
		copiedTreeRoot->info = otherTreeRoot->info;
		copyTree(copiedTreeRoot->llink, otherTreeRoot->llink);
		copyTree(copiedTreeRoot->rlink, otherTreeRoot->rlink);
	}
}

template <class elemType>
void BinaryTree<elemType>::destroy(binaryTreeNode<elemType>*& p)
{
	if (p != NULL)
	{
		destroy(p->llink);
		destroy(p->rlink);
		delete p;
		p = NULL;
	}
}

template <class elemType>
void BinaryTree<elemType>::destroyTree()
{
	destroy(root);
}

template <class elemType>
BinaryTree<elemType>::BinaryTree(const BinaryTree<elemType>& otherTree)
{
	if (otherTree.root == NULL) 
		root = NULL;
	else
		copyTree(root, otherTree.root);
}

template <class elemType>
BinaryTree<elemType>::~BinaryTree()
{
	destroy(root);
}

template <class elemType>
const BinaryTree<elemType>& BinaryTree<elemType>::operator=(const BinaryTree<elemType>& otherTree)
{
	if (this != &otherTree)
	{
		if (root != NULL) 
			destroy(root);
		if (otherTree.root == NULL) 
			root = NULL;
		else
			copyTree(root, otherTree.root);
	}
	return *this;
}


template class BinaryTree<int>;
template class BinaryTree<double>;
template class BinaryTree<string>;
