#include "Polynomial.h"

int main()
{
	int tam;
	cout<<"***************************************************"<<endl;
	cout<<"First Polynomial"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Grade of the Polynomial ";
	cin>>tam;

	Polynomial A(tam);
	A.generatePolynomial();

	cout<<"***************************************************"<<endl;
	cout<<"Second Polynomial"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Grade of the Polynomial ";
	cin>>tam;
	
	Polynomial B(tam);
	B.generatePolynomial();

	
		//Overloading +=
		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading +="<<endl;
		cout<<"***************************************************"<<endl;
		
		cout<<"A= ";
		A.printPolynomial();

		cout<<"B= ";
		B.printPolynomial();

		A+=B;
		cout<<"A+=B ";
		A.printPolynomial();


		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading + and ="<<endl;
		cout<<"***************************************************"<<endl;
		
		Polynomial *C;	

		cout<<"A= ";
		A.printPolynomial();

		cout<<"B= ";
		B.printPolynomial();

		C=A+B;
		
		cout<<"Result C=A + B ";
		C->printPolynomial();

		cout<<"A= ";
		A.printPolynomial();

		cout<<"B= ";
		B.printPolynomial();

		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading * and ="<<endl;
		cout<<"***************************************************"<<endl;


		cout<<"A= ";
		A.printPolynomial();

		cout<<"B= ";
		B.printPolynomial();

		C=A*B;
		
		cout<<"Result C=A * B ";
		C->printPolynomial();

		cout<<"A= ";
		A.printPolynomial();

		cout<<"B= ";
		B.printPolynomial();



		//Overloading *=
		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading *="<<endl;
		cout<<"***************************************************"<<endl;
		
		cout<<"A= ";
		A.printPolynomial();

		cout<<"B= ";
		B.printPolynomial();

		B*=A;
		cout<<"B*=A ";
		B.printPolynomial();		


		cout<<"A= ";
                A.printPolynomial();

                cout<<"B= ";
                B.printPolynomial();



	return 0;
}
