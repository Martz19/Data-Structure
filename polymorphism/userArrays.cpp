#include "Arrays.h"

int main()
{
	int tam, i, j;
	Arrays Arr1;
	cout<<"***************************************************"<<endl;
	cout<<"First Array"<<endl;
	cout<<"***************************************************"<<endl;
	Arr1.generateArray();
	Arr1.printArray();
	cout<<"How many elements would you like print? ";
	cin>>i;
	Arr1.printArray(i);

	cout<<"***************************************************"<<endl;
	cout<<"Sencond Array"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Size of the Array ";
	cin>>tam;
	Arrays Arr3(tam);
	Arr3.generateArray();
	Arr3.printArray();
	cout<<"How many elements would you like print? ";
	cin>>i;
	Arr3.printArray(i);


	cout<<"From which element would you like print? ";
        cin>>i;
	
	cout<<"To which element would you like print? ";
        cin>>j;
        Arr3.printArray(i, j);



	return 0;
}
