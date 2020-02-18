#include <stdlib.h>
#include "IntSLList.h"

// singleLinkedList.cpp : Defines the entry point for the console application.

int main(int argc, char* argv[])
{
	IntSLList<int> list;
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
		list.deleteFromHead();
		cout<<"After delete ";
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
		list.deleteFromTail();
		cout<<"After delete ";
		list.printList();
		cout<<endl;
	}

/*
	cout<<endl<<"New List using sortInsert "<<endl<<"Original Values ";

	list.printList();


	for (i=1; i< 10; i++)
	{

		k = rand();
		cout<<endl<<"insert " << k<< " new list ";
		list.sortInsert(k);
		list.printList();
	}

	cout<<endl<<"New List ";
	list.printList();
*/
		cout<<endl<<"New List using addToTail ";
	for (i=1; i< 10; i++)
	{
		list.addToTail(i);
	}

		list.printList();
	cout<<endl;

	cout<<"Delete before tail "<<endl;
	
	while(!list.isEmpty())
	{

		cout<<"Before delete ";
		list.printList();
		list.deleteBeforeTail();
		cout<<"After delete ";
		list.printList();
		cout<<endl;
	}

	return 0;
}
