/*************************
Universidad Ana G. Méndez
Gurabo Campus
COMP 315 - Introduction to data structures and Algoritms
Spring 2019

This program uses the Time class
Tasks:
	1. Read the hour, minute, and second
	2. Print based on menu selection
		Menu
			1. Print time using the military format (24 hours)
			2. Print time using the standard format (12 hours AM/PM)
**************************/

//Include the Time header file
#include "Time.h"

/*****************************************
main function
	1. Read the hour, minute, and second
	2. Print based on menu selection
		Menu
			1. Print time using the military format (24 hours)
			2. Print time using the standard format (12 hours AM/PM)
**************************/
int main(){
	//Variables declaration hh: hour, mm: minute, ss: second, op: option, r: response
	int hh, mm, ss, op, r;
	
	//Time object declaration 
	Time Tp;

	//Read time
	cout<<"Ingrese la Hora Inicial ";
	cin>>hh>>mm>>ss;

	//Set time attributes
	Tp.setTime(hh, mm, ss);

	do{
		cout<<"Desea Imprimir: 1- Hora Militar, 2- Hora Estandar ";
		cin>>op;

		if(op==1)
		{
			//Print time using the military format
			cout<<"Hora Militar: ";
			Tp.printMilitary();
			cout<<endl;
		}else
		{
			//Print time using the standard format
			cout<<"Hora Estandar: ";
			Tp.printStandard();
			cout<<endl;
		}
		cout<<"Desea Salir (1:Si)"<<endl;
		cin>>r;
	}while(r!=1);

	return 0;

}
