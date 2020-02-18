#include "Book.h"

Book::Book()
{
	title = plot = editor = releaseYear = "";
	aut = new IntSLList<Author>;
}

Book::Book(string t, string p, string e, string r)
{
	title = t;
	plot = p;
	editor = e;
	releaseYear = r;
	aut = new IntSLList<Author>;
}

void Book::gBook(string t, string p, string e, string r)
{
	title = t;
	plot = p;
	editor = e;
	releaseYear = r;
}

IntSLList<Author>* Book::getAuthor()
{
  return aut;
}

std::string Book::getTitle()
{
  return title;
}
std::string Book::getPlot()
{
  return plot;
}
std::string Book::getEditor()
{
  return editor;
}
std::string Book::getRyear()
{
  return releaseYear;
}

void Book::setTitle(std::string t)
{
  title = t;
}
void Book::setPlot(std::string p)
{
  plot = p;
}
void Book::setEditor(std::string e)
{
  editor = e;
}
void Book::setRyear(std::string r)
{
  releaseYear = r;
}

