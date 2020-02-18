/*
	@author: Josue Martinez Martinez
	Student ID: S00960233
	Resume: This program is a library database that the user can enter new genres, new books, search for a specific
			book, modify the info of a book, list all the genres and all books by genre. This Library Database
			was programmed using a singular linked list for save the authors inside of a circular linked list that
			have the information of the book and that inside of a binary search tree for divide all books by genre.
*/

#include "Genre.h"
#include "BSTree.h"

using namespace std;
BSTree<Genre> list;
Book *bk;
Genre *gen;
Author *aut;

string genre, title, plot, last, first, editor, release;
int option;

//function prototypes
//void insertGenre();
//void addBook();
int main(int argc, char* argv[])
{

  do {

	  /*
			Here are the print for the  menu of the library and there are waiting for the user
			to select an option.
	  */
    cout<<"--UAGM Library--"<<endl;
    cout<<"1. Add a Genre"<<endl;
    cout<<"2. Add a book"<<endl;
    cout<<"3. Modify a book"<<endl;
    cout<<"4. List all genre"<<endl;
    cout<<"5. List all books by genre"<<endl;
    cout<<"6. List all books for a selected genre"<<endl;
    cout<<"7. Search for a book"<<endl;
    cout<<"8. Exit"<<endl;
    cin>>option;

		/*
			This option is for insert a genre to the tree. There the user enter the genre name
			then using the genre object the program set the genre name for then call the method insert
			for inset the genre in order.
		*/
      //add a genre
      if(option == 1)
      {
			
			  cout << "Insert genre" << endl;
			  cin >> genre;
			  gen = new Genre(genre);
			  gen->setName(genre);
			  list.insert(*gen);
		  
      }

	  /*
			In this option the user can enter a book with all the information but they need to 
			enter the right genre if not the program are going to stock the user there until they 
			enter the right one. 
	  */
      //add a book
      else if(option == 2)
      {
        do
		{
        cout<<"Please, enter one of this genre"<<endl;
        list.printInOrder();
        cin>>genre;
		gen->setName(genre);

        }while(list.search(*gen) == 0);

		
		cout << "Please, enter Title of book" << endl;
		cin >> title;
		
		cout << "Please, enter Plot of book" << endl;
		cin >> plot;
		
		cout << "Please, enter Editor of book" << endl;
		cin >> editor;
		
		cout << "Please, enter Release Year of book" << endl;
		cin >> release;
		
		//bk = new Book(title, plot, editor, release);
		/*
			Here the program insert the book inside of the tree in a circular linked list
		*/
		bk = new Book(title, plot, editor, release);
		list.search(*gen)->getInfo().getBooks()->sortInsert(*bk);

		int numb = 0;
		cout << "How much authors the book have?" << endl;
		cin >> numb;
		
		/*
			loop for enter authors full names
		*/
		for (int i = 0; i < numb; i++)
		{
			
			cout << "Please, enter Author's last name" << endl;
			cin >> last;
			
			cout << "Please, enter Author's first name" << endl;
			cin >> first;
			

			aut = new Author(last, first);
			bk->getAuthor()->sortInsert(*aut);
		}
		
			
			
		
	
	  }

	  /*
			In this option the user can enter the title of the book for find it and edit it. There the 
			user can edit more than one book
	  */
      //modify book
      else if(option == 3)
      {

		  Book modi;
		  Book *tmp;

		  tmp = &modi;
		  string mod;
		  cout << "which book you want to modify?" << endl;
		  cin >> mod;
		  modi.setTitle(mod);
	
		  /*
				If the search found the title then ask for the info of the new book
		  */
		  if (list.search(*gen)->getInfo().getBooks()->searchNode(modi) != 0)
		  {
			  cout << "Title: " << list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().getTitle() << endl;
			  cout << "Editor: " << list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().getEditor() << endl;
			  cout << "Plot: " << list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().getPlot() << endl;
			  cout << "Year: " << list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().getRyear() << endl;
			  
			  bool F = false;
			  while(F != true)
			  { 
				  int op;
				  cout << "Do you want to modify the book ? ? ?" << endl;
				  cout << "For yes 1 " << "For no 2" << endl;
				  cin >> op;
				  
				  switch (op)
				  {
				  case 1://modify book

					  cout << "To modify a book you need to enter the following information: " << endl;
					  cout << "Enter title of new book:";
					  cin >> title;

					  cout << "Enter editor of new book: ";
					  cin >> editor;

					  cout << "Enter plot of new book: ";
					  cin >> plot;

					  cout << "Enter year of new book: ";
					  cin >> release;
					  Genre *gen2;
					  Book *b;
					  //IntDLLNode<Book> lol;
					  gen2 = &(list.search(*gen)->getInfo());
					  b = &(gen2->getBooks()->searchNode(modi)->getInfo());
					  cout << b->getTitle() << endl;
					  b->setTitle(title);
					  b->setEditor(editor);
					  b->setPlot(plot);
					  b->setRyear(release);



					  /*tmp = new Book(title, plot, editor, release);
					  list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().setTitle(title);
					  list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().setEditor(editor);
					  list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().setPlot(plot);
					  list.search(*gen)->getInfo().getBooks()->searchNode(modi)->getInfo().setRyear(release);
					  */
					  break;

				  case 2:// no modify
					  F = true;
					  break;

				  default:
							  cout << "Try again" << endl;
					  break;
				  }
			  }

			

		  }

      }
	  /*
			In this option the user can see all the genres in alphabetical order
	  */
      //list all genre
      else if(option == 4)
      {
		  cout << "There are all the genres in Alphabetical Order" << endl;
			list.printInOrder();
      }


	  /*
			In this option the user can see all the books in the library by genre
	  */
      //list all book by genre
      else if(option == 5)
      {
		  cout << "There are the books by genre" << endl;
		  list.printInOrder2();

      }
	  /*
		This option requires that the user enter one of the printed genres for then search inside of it
		and print the information of the book that are inside of the circular linked list. There i create a
		new object for verify if the genre are in the the tree if its there then it go inside and print
		the books for the selectected genre.
	  */
      //list all books for a selected genre
      else if(option == 6)
      {
		Genre gentmp;
		do {
			cout << "Please, enter one of this genre" << endl;
			list.printInOrder();
			cin >> genre; 
			gentmp.setName(genre);
		} while (list.search(gentmp) == 0);
		
				list.search(gentmp)->getInfo().getBooks()->printList();
      }
	  /*
			In this option the user can enter the title of the book for find it in the library
			and show all the information of it.
	  */
      //search book
      else if(option == 7)
	  {
		Book btmp;
		
		cout << "Enter Title of the book for search" << endl;
		cin >> title;
		btmp.setTitle(title);
		
		cout << "Genre: " << gen->getName() << endl;
		cout << "Title: " << list.search(*gen)->getInfo().getBooks()->searchNode(btmp)->getInfo().getTitle() << endl;
		cout << "Plot: " << list.search(*gen)->getInfo().getBooks()->searchNode(btmp)->getInfo().getPlot() << endl;
		cout << "Editor: " <<list.search(*gen)->getInfo().getBooks()->searchNode(btmp)->getInfo().getEditor() << endl;
		cout << "Release Year: " <<list.search(*gen)->getInfo().getBooks()->searchNode(btmp)->getInfo().getRyear() << endl;
		cout << "Authors: ";
		list.search(*gen)->getInfo().getBooks()->searchNode(btmp)->getInfo().getAuthor()->printList();
		//cout << aut->getLast() << " " << aut->getFirst() << endl;
		//cout<< list.search(*gen)->getInfo().getBooks()->searchNode(btmp)->getInfo().printList();
        cout<<option<<endl;


	  }

      //exit
      else if(option == 8)
      {
		cout << "Bye" << endl;
        cout<<option<<endl;
      }
    } while(option != 8);
}

/*
void insertGenre()
{
	cout << "Insert genre" << endl;
	cin >> genre;
	gen.setName(genre);
	list.insert(gen);
	circ = new circDLList<Book>;
}

void addBook()
{


	do {
		cout << "Please, enter one of this genre" << endl;
		list.printInOrder();
		cin >> genre;
		gen.setName(genre);

	} while (list.search(gen) == 0);

	bk = new Book();
	cout << "Please, enter Title of book" << endl;
	cin >> title;
	bk->setTitle(title);
	cout << "Please, enter Plot of book" << endl;
	cin >> plot;
	bk->setPlot(plot);
	cout << "Please, enter Editor of book" << endl;
	cin >> editor;
	bk->setEditor(editor);
	cout << "Please, enter Release Year of book" << endl;
	cin >> release;
	bk->setRyear(release);
	int numb = 0;
	cout << "How much authors the book have?" << endl;
	cin >> numb;


	for (int i = 0; i < numb; i++) {
		aut = new Author();
		cout << "Please, enter Author's last name" << endl;
		cin >> author;
		aut->setLast(author);
		cout << "Please, enter Author's first name" << endl;
		cin >> author;
		aut->setFirst(author);

	}



	//renew the circular the lists when you are making new stuff, you don't want to share the same list for every genre... like wtf
	if (!list.search(gen)->getCirc()) {

		list.search(gen)->getCirc()->sortInsert(*bk);
		single = new IntSLList<Author>;
	}

	*/
// }
