#pragma once

template <class elemType>
struct binaryTreeNode
{
	elemType info;
	binaryTreeNode<elemType>* llink;
	binaryTreeNode<elemType>* rlink;
};

template <class elemType>
class BinaryTree
{
public:
	const BinaryTree<elemType>& operator=
		(const BinaryTree<elemType>&);
	bool isEmpty() const;
	
	void inorderTraversal() const;
	
	void preorderTraversal() const;
	
	void postorderTraversal() const;
	
	int treeHeight() const;
	
	
	void destroyTree();
	
	BinaryTree(const BinaryTree<elemType>& otherTree);
	
	BinaryTree();
	
	~BinaryTree();
	
protected:
	binaryTreeNode<elemType>* root;
private:
	void copyTree(binaryTreeNode<elemType>*& copiedTreeRoot,
		binaryTreeNode<elemType>* otherTreeRoot);
	
	void destroy(binaryTreeNode<elemType>*& p);
	void inorder(binaryTreeNode<elemType>* p) const;
	void preorder(binaryTreeNode<elemType>* p) const;
	
	void postorder(binaryTreeNode<elemType>* p) const;
	
	int height(binaryTreeNode<elemType>* p) const;
	
	int max(int x, int y) const;
	
};

