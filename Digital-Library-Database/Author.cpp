#include "Author.h"
Author::Author() {
	Last = "";
	First = "";
}
Author::Author(string l, string f) {
	Last = l;
	First = f;
}
string Author::getLast()
{
  return Last;
}

string Author::getFirst()
{
  return First;
}

void Author::setLast(string l)
{
    Last = l;
}

void Author::setFirst(string f)
{
    First = f;
}
