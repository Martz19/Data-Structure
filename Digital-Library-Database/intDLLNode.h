/**********************
COMP 315 - Introduction to data structures
Singly linked node
This class implements the singly linked node using templates
Each nodes two attributes:
	-info: stores the actual value
	-next: a pointer to the next node in the list
******************/


//#include <iostream>

/**********************************
Class Declaration

***********************/
template <class T>
class IntDLLNode{
public:
	IntDLLNode(); //Default constructor
	IntDLLNode( IntDLLNode<T>*, T , IntDLLNode<T>*); //Special constructor

	T getInfo(); //getInfo
	//T getauthor();//getauthor
	IntDLLNode<T>* getNext(); // getNext
	IntDLLNode<T>* getPrev(); // getPrev
	//IntSLList<Author>* getAuthor();
	void setInfo(T); //setInfo
	void setNext(IntDLLNode<T> *); //Set next
	void setPrev(IntDLLNode<T> *); //Set Prev
	//void setAuthor(IntSLList<Author>* a);
private:

	IntDLLNode<T> *prev;//Points to the previous node in the list
	T info; //Actual data
	IntDLLNode<T> *next; //Points to the next node in the list
	//IntSLList<Author> *aut;//singular linked list

};


/*****
	Default constructor
	Creates a empty node
*****/
template <class T>
IntDLLNode<T>::IntDLLNode()
	{	next=prev=0; }

/******
	Special constructor:
	Creates a node with value i in the info attribute and next pointing to null
	@params:
		*p: pointer to the previous node
		i: actual value to be stored
		*n: pointer to the next node
*******/
template <class T>
IntDLLNode<T>::IntDLLNode(IntDLLNode<T> *p, T i, IntDLLNode<T> *n)
 {
	this->info=i;
	prev=p;
	next=n; }

/********
	getInfo
	returns the info value
*********/
template <class T>
T IntDLLNode<T>::getInfo()
	{return info;}
/**
	template <class T>
	T IntDLLNode<T>::getauthor()
	{
		return autsing;
	}
	*/
/********
	getNext
	returns a point to next node the list
**********/
template <class T>
IntDLLNode<T> *IntDLLNode<T>::getNext()
	{return next;}

/********
	getPrev
	returns a point to prev node the list
**********/
template <class T>
IntDLLNode<T> *IntDLLNode<T>::getPrev()
	{return prev;}

/*
template <class T>
IntSLList<Author> *IntDLLNode<T>::getAuthor()
	{return aut;}
	*/

/********
	setInfo
	Set i as the node info
*******/
template <class T>
void IntDLLNode<T>::setInfo(T i)
	{ info = i;}

/********
	setNext
	Points next attribute to the next list node
********/
template <class T>
void IntDLLNode<T>::setNext(IntDLLNode<T> *n )
	{ next = n;}

/********
	setPrev
	Points next attribute to the prev list node
********/
template <class T>
void IntDLLNode<T>::setPrev(IntDLLNode<T> *p )
	{ prev = p;}
/*
template <class T>
void IntDLLNode<T>::setAuthor(IntSLList<Author> *a)
{aut = a;}
*/