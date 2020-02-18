/*
	Header for geter and seter of the genres of the trees .
*/

#include "circDLList.h"
#include "Book.h"
#include <string>
using namespace std;
class Genre
{
public:
	Genre();
	Genre(string);
	circDLList<Book>* getBooks();
	//void insertBooks(Book bk);
	string getName();
	void setName(string n);
	circDLList<Book>* getCirc();

private:
  circDLList<Book> *books;
  circDLList<Book> *circular;
  string name;
};