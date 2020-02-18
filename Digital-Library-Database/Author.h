/*
	Header for geters and seters for the Authors First and Last name in the single linked list. 
*/

#include <string>
using namespace std;
class Author
{
public:
  Author();
  Author(string, string );
  string getLast();
  string getFirst();

  void setLast(string l);
  void setFirst(string f);

private:

  string Last, First;
};
