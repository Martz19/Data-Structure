/**********************
COMP 315 - Introduction to data structures
Binary Search Tree
This class implements the Binary Search Tree using templates
Each list has one attribute:
	-root: first node in tree

Considerations:
1. root points to null in an empty list

******************/

#include "BSTNode.h"

template <class T>
class BSTree{
public:
	//Default constructor: creates an empty tree
	BSTree();

	//Destructor: deallocate memory
	~BSTree();

	//insert(T val): creates a new node with val as info,
	void insert(T val);

	//remove(T val): remove the first node with val as info,
	//if the node is removed, returns true, otherwise returns false
	bool remove(T val);

	//search(T val): returns a pointer to node with val as info
	BSTNode<T>* search(T val);


	//If the tree is empty, returns true
	//otherwise, returns false
	bool isEmpty();

	//printInOrder(): InOrder Traversal
	void printInOrder();

	//printPreOrder(): PreOrder Traversal
	void printPreOrder();

	//printPostOrder(): PostOrder Traversal
	void printPostOrder();
private:
	BSTNode<T> *root; //A pointer to the first node

	void visitInOrder(BSTNode<T> *node);//Recursive support method for printInOrder
	void visitPreOrder(BSTNode<T> *node);//Recursive support method for printPreOrder
	void visitPostOrder(BSTNode<T> *node);//Recursive support method for printPostOrder
	void removePostOrder(BSTNode<T>* node);//Recursive support method for the destructor
	BSTNode<T>* recursiveSearch(BSTNode<T> *node, T val);//Recursive support method for search
	bool recursiveSearchForRemove(BSTNode<T> *node, T val);//Recursive support method for remove
	BSTNode<T>* findLowest(BSTNode<T> *node);//Extract the lowest node in a subtree rooted on node
};

/****************
	Default constructor: creates an empty Binary Search tree
*****************/
template <class T>
BSTree<T>::BSTree()
{
	root = 0;
}

template <class T>
BSTree<T>::~BSTree()
{
	removePostOrder(root);
}

template <class T>
void BSTree<T>::insert(T val)
{
	if (root == 0)
	 {
	root = new BSTNode<T>(0, val, 0);
	}
else {
	BSTNode<T>* tmp, * sRoot;
	tmp = root;

	while (tmp != 0){
		sRoot = tmp;
		if (val < sRoot->getInfo())
			tmp = tmp->getLeft();
		else
			tmp = tmp->getRight();
		}
		if (val < sRoot->getInfo())
			sRoot->setLeft(new BSTNode<T>(0, val, 0));
		else
			sRoot->setRight(new BSTNode<T>(0, val, 0));
	}
}


template <class T>
bool BSTree<T>::remove(T val)
{
	bool res = false;
if (root != 0)

{
if (root->getInfo() == val) {
	if ((root->getLeft() == 0) &&
		(root->getRight() == 0)) {
		delete root;
		root = 0;
	}
	else {
		BSTNode<T>* tmp;
		tmp = root;
		if (root->getLeft() == 0)
			root = root->getRight();
		else if (root->getRight() == 0)
			root = root->getLeft();

		else {
			BSTNode<T>* lowest;
			lowest = findLowest(root->getRight());
			if (root->getRight() == lowest) {
					lowest->setLeft(root->getLeft());
				root = lowest;
			}
			else {
				root = lowest;
				root->setLeft(tmp->getLeft());
				root->setRight(tmp->getRight());
			}
		} delete tmp;
	}  res = true;
}
else
	res = recursiveSearchForRemove(root, val);
} return res;
}

//search(T val): returns a pointer to node with val as info
template <class T>
 BSTNode<T>*BSTree<T>::search(T val) {
	{
		return recursiveSearch(root, val);
	}
}
template <class T>
bool BSTree<T>::isEmpty()
{

	bool res;
	res = false;
	if (root == 0)
	{
		res = true;
	}
}

template <class T>
void BSTree<T>::printInOrder()
{
		visitInOrder(root);
}

template <class T>
void BSTree<T>::printPreOrder()
{
		visitPreOrder(root);
}

template <class T>
void BSTree<T>::printPostOrder()
{
		visitPostOrder(root);
}

template <class T>
void BSTree<T>::visitInOrder(BSTNode<T>* node)
	{
		if (node == 0)
		return;
			visitInOrder(node->getLeft());
			cout << "-" << node->getInfo()<< "-";
			visitInOrder(node->getRight());

	}

	//Recursive support method for printInOrder
template <class T>
void BSTree<T>::visitPreOrder (BSTNode<T>* node)
{
	if (node == 0)
		return;

		cout << "-" <<node->getInfo() << "-";
		visitPreOrder(node->getLeft());
		visitPreOrder(node->getRight());

}

//Recursive support method for printPreOrder
template <class T>
void BSTree<T>::visitPostOrder(BSTNode<T>* node)//Recursive support method for printPostOrder
{
	if (node == 0)
	return;

		visitPostOrder(node->getLeft());
		visitPostOrder(node->getRight());
		cout << "-" << node->getInfo() << "-";

}

template <class T>
void BSTree<T>:: removePostOrder(BSTNode<T>* node)//Recursive support method for the destructor
{

	if (node == 0) return;
	if (node->getLeft() != 0)
	removePostOrder(node->getLeft());
	if (node->getRight() != 0)
	removePostOrder(node->getRight());

	cout << "\n Deleting node: " << node->getInfo() << "\n\n";
	delete node;


	return ;
}


template <class T>
BSTNode<T> *BSTree<T>:: recursiveSearch(BSTNode<T> *node, T val)//Recursive support method for search
{
	BSTNode<T>* res;
	res = 0;
	if (node != 0) {
		if (val == node->getInfo())
			res = node;
		else if (val < node->getInfo())
			res = recursiveSearch(node->getLeft(), val);
		else
			res = recursiveSearch(node->getRight(), val);
	}
	return res;
}

template <class T>
bool BSTree<T>::recursiveSearchForRemove(BSTNode<T>* node, T val)//Recursive support method for remove
{
	bool res;//Function Result
	res = false;// Default value
	BSTNode<T> *tmp, *found;
	if ((node->getLeft() != 0) && (val < node->getInfo())) {
		//it could be at the left
		if (node->getLeft()->getInfo() == val)
		//val is its left child
		{
			found = node->getLeft();
			if (found->getRight() == 0)//No right child
			{
				node->setLeft(found->getLeft());
			}
			
			else//right child
			//find the lowest greater children
			{
				tmp = findLowest(found->getRight());
				node->setLeft(tmp);
				tmp->setLeft(found->getLeft());
			}
			delete found;
			res = true;
		}

		else
		{
			res = recursiveSearchForRemove(node->getLeft(), val);
		}
}
		else if ((node->getRight() != 0) && (val > node->getInfo())) {
			//it could be at right
			if (node->getRight()->getInfo() == val)
			//val is the right child
			{
				if (node->getRight() == 0)
				//no right child
					node->setRight(found->getLeft());
				else
				{ //find the lowest greater children
					tmp = findLowest(found->getRight());
					node->setRight(tmp);
					tmp->setLeft(found->getLeft());
					tmp->setRight(found->getRight());
				}
				delete found;
				res = true;
			}
			else //it could be at the right
				res = recursiveSearchForRemove(node->getRight(), val);
		}
	return res;
}

template <class T>
BSTNode<T>* BSTree<T>::findLowest(BSTNode<T>* node)//Extract the lowest node in a subtree rooted on node
{
	BSTNode<T> *tmp;
	if (node->getLeft() == 0) {
		tmp = node;
	}
	else {
		while (node->getLeft()->getLeft() != 0)
			node = node->getLeft();
		tmp = node->getLeft();
		node->setLeft(tmp->getRight());
	}
	return tmp;
}
