#include <stdlib.h>
#include "circDLList.h"

// singleLinkedList.cpp : Defines the entry point for the console application.

int main(int argc, char* argv[])
{
	circDLList<int> list;
	int i, k;

	cout<<endl<<"New List using addToHead ";
	for (i=1; i< 10; i++)
	{
		list.addToHead(i);
	}

	list.printList();
	
	cout<<"Delete from head "<<endl;
	while(!list.isEmpty())
	{

		cout<<"Before delete ";
		list.printList();
		
		cout<<" - reverse: ";
		list.printRevList();
		list.deleteFromHead();
		cout<<endl<<"After delete ";
		list.printList();
		cout<<endl;
	}

	
	cout<<endl<<"New List using addToTail ";
	for (i=1; i< 10; i++)
	{
		list.addToTail(i);
	}

		list.printList();
	cout<<endl;


	cout<<"Delete from tail "<<endl;
	
	while(!list.isEmpty())
	{

		cout<<"Before delete ";
		list.printList();
		cout<<" - reverse: ";
		list.printRevList();
		list.deleteFromTail();
		cout<<endl<<"After delete ";
		list.printList();
		cout<<endl;
	}


	cout<<endl<<"New List using sortInsert "<<endl<<"Original Values ";

	//list.printList();


	for (i=1; i< 10; i++)
	{

		k = rand() % 100;
		cout<<endl<<"insert " << k<< " new list ";
		list.sortInsert(k);
		list.printList();
	}

	cout<<endl<<"Print  : ";
	list.printList();

	cout<<endl<<"Reverse: ";
	list.printRevList();
	cout<<endl<<"Done!"<<endl;
	return 0;
}
