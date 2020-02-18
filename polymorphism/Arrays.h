#include <iostream>
using namespace std;

class Arrays{
public:
	
	Arrays();				//Default constructor: it creates an Array of 100 positions
	Arrays(int sz);			//Special constructor: it creates an Array of sz positions
	Arrays(const Arrays &OR);		//Copy Constructor
	~Arrays();				//Destructor: deallocate memory
	void readArray();		//readArray Method: Reads all positions of the array
	void printArray();		//printArray Method: Prints all positions of the array
	void printArray(int n); //printArray Method: Prints the n first positions of the array
	void printArray(int i, int j); //printArray Method: Prints from position i to position j
	int getSize();			//getSize Method: return the size of the Array
	void generateArray();   //generateArray Method: Generates the elements for the array
private:
	int *Arr;
	int size;
};
