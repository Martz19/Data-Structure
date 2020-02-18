#ifndef __POLYNOMIAL_H__
#define __POLYNOMIAL_H__
#include <iostream>
#include <stdlib.h>

using namespace std;

class Polynomial{
public:
	
	Polynomial();				//Default constructor: it creates an Polynomial of degree 99
	Polynomial(int dg);			//Special constructor: it creates an Polynomial of degree dg
	Polynomial(const Polynomial &Original);	//Copy Constructor
	~Polynomial();				//Destructor: deallocate memory
	void readPolynomial();		//readPolynomial Method: Reads all positions of the Polynomial
	void printPolynomial();		//printPolynomial Method: Prints all positions of the Polynomial
	void printPolynomial(int n); //printPolynomial Method: Prints the n first positions of the Polynomial
	int getDegree();			//getSize Method: return the Polynomial degree
	void generatePolynomial();   //generatePolynomial Method: Generates the elements for the Polynomial
	void operator+=(const Polynomial &B); //Overload the Operator += for using with Polynomial
	Polynomial *operator+(const Polynomial &B); //Overload the Operator + for using with Polynomial
	void operator=(const Polynomial &B);
	void initPolynomial(int i);
	Polynomial *operator *(const Polynomial &B); //Overloading * Operator for Polynomial*Polynomial
	void operator*=(const Polynomial &B);//Overloading *= Operator for Polynomial*Polynomial
	Polynomial *operator*(int val);//Overloading * Operator for Polynomial*int
	void operator*=(int val);//Overloading *= Operator for Polynomial*int


private:
	double *Coef;
	int degree;
};
#endif
