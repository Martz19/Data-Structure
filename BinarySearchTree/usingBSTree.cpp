#include <stdlib.h>
#include "BSTree.h"

int main(int argc, char* argv[])
{
	BSTree<int> BST;
	int i, k;

	for (i=1; i< 15; i++)
	{

		k = rand() % 100;
		cout<<endl<<"insert " << k<< " new list ";
		BST.insert(k);

	}
	cout<<endl<<"Inorder Traversal"<<endl;
	BST.printInOrder();


	cout<<endl<<"Pre-order Traversal"<<endl;
	BST.printPreOrder();


	cout<<endl<<"Post-order Traversal"<<endl;
	BST.printPostOrder();

	int sVal;
	cout<<endl<<"Insert value to be searched:";
	cin>>sVal;
	if (BST.search(sVal)!=0)
		cout<<sVal<<" found!"<<endl;
	else
		cout<<"Not found!"<<endl;


	cout<<endl<<"Delete value:";
	cin>>sVal;
	if (BST.remove(sVal))
		cout<<sVal<<" found!"<<endl;
	else
		cout<<"Not found!"<<endl;

	cout<<endl<<"Inorder Traversal"<<endl;
	BST.printInOrder();

	cout<<endl<<"Pre-order Traversal"<<endl;
	BST.printPreOrder();

	cout<<endl<<"Post-order Traversal"<<endl;
	BST.printPostOrder();


	cout<<endl<<"Goodbye!"<<endl;
	return 0;
}
