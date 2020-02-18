//#include "IntSLList.h"
/*
	Header file for geters and seters for the info of the book in the circular linked list.
*/

#include <string>
#include "Author.h"
#include "IntSLList.h"
using namespace std;
class Book
{
public:
  Book();
  Book(string, string, string, string);
  void gBook(string, string, string, string);
  string getTitle();
  string getPlot();
  string getEditor();
  string getRyear();

  void setTitle(string t);
  void setPlot(string p);
  void setEditor(string e);
  void setRyear(string r);

  IntSLList<Author>* getAuthor();

private:
    IntSLList<Author>* aut;
    string title, plot, editor, releaseYear;


};
