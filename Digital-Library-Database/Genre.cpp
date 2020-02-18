#include "Genre.h"

Genre::Genre()
{
	name = "";
	books = new circDLList<Book>;
}

Genre::Genre(string n)
{
	name = n;
	books = new circDLList<Book>;
}

circDLList<Book>* Genre::getBooks()
{
  return books;
}


string Genre::getName()
{
  return name;
}
void Genre::setName(string n)
{
  name = n;
}

circDLList<Book>* Genre::getCirc()
{
	return circular;
}
/*void Genre::insertBooks(Book bk) {
	books.sortInsert(bk);
}*/