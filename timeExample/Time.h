/*************************
Universidad Ana G. Méndez
Gurabo Campus
COMP 315 - Introduction to data structures and Algoritms
Spring 2019

This header file declares the Time class

**************************/

//Include the libraries
#include <iostream> //Allow the use of cin and cout
//Declare namespace std for using cin and cout
using namespace std;

//Class declaration
class Time{
	
	//Public members
	public:
		
		/****************
			Default constructor
			Task: assign zero to hour, minute, second 
		*********/
		Time();
		
		/*****
			setTime method
			Task: set the hour, minute, and seconds
			params: 
				hh: hour
				mm: minutes
				ss: seconds
		*******/
		void setTime(int hh, int mm, int ss);
		
		/****
			printMilitary
			task: Print time using the military format (24 hours)
			******/
		void printMilitary();
		
		/********
			printStandard method
			task: Print time using the standard format (12 hours AM/PM)
			*******/ 
		void printStandard();

	//Private members
	private:
		//Hours [0 - 11]
		int hour;
		
		//Minures [0 - 59]
		int minute;
		
		//Seconds [0-59]
		int second;
};
