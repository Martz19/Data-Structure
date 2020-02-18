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
#include "ExtTime.h"


using namespace std;

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
	ExtTime Tp;

	//Read time
	cout<<"Ingrese la Hora Inicial ";
	cin>>hh>>mm>>ss;

	//Read time
	Tp.setTime(hh, mm, ss, EST);

	do{	cout<<endl<<"Desea Imprimir: 1- Hora Militar, 2- Hora Estandar, 3- Zona ";
		cin>>op;
        switch(op){ 
		case 1: 	cout<<"Hora Militar: ";
			Tp.printMilitary();
                        	break;
		case 2: 	cout<<"Hora Estandar: ";
			Tp.printStandard();
			break;
            	case 3:        cout<<"Hora Estandar y zona horaria ";
                        	Tp.Write();
			break;
		default:        cout<<"Opcion no valida";
			break;}
		cout<<endl<<"Desea Salir? 1-Si";
		cin>>r;
	}while(r!=1);

	return 0;}
