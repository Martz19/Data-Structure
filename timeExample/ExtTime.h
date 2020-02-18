/*************************
Universidad Ana G. Méndez
Gurabo Campus
COMP 315 - Introduction to data structures and Algoritms
Spring 2019

This header file declares the ExtTime Class as Derived class from Time

**************************/

//Reference the super class header file
#include "Time.h"

//Define the ZoneType enumeration
enum ZoneType {EST, CST, MST, PST, CDT, MDT, PDT};


/***
	Class declaration
	ExtTime is a derived class from Time
***/
class ExtTime : public Time{
//Public members
	public:
		/***************************
		Default constructor
			Task: Establishes EST as default zone and zero to hour, minute and second
		***************************/
		ExtTime();
				
		/*****
			setTime method
				Task: set the hour, minute, and seconds
				params: 
					hh: hour
					mm: minutes
					ss: seconds
					timeZone: time zone
		*******/
		void setTime (int hh, int mm, int ss, ZoneType timeZone);
		
		/***************************
			Write method
				Task: Print current time including the time zone
				@Parameters
				@returns
				
		***************************/
		void Write();
		
		/***************************
			Zone method
				Task: Set the time
				@Parameters
				@returns
					zone: local time zone
				
		***************************/
		ZoneType Zone(); 
		
	//Private members
	private:
		//zone Time zone
		ZoneType zone;	
};

