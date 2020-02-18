/*************************
Universidad Ana G. Méndez
Gurabo Campus
COMP 315 - Introduction to data structures and Algoritms
Spring 2019

ExtTime Class Implementation

**************************/

//Reference to the header file
#include "ExtTime.h"

/***************************
Default constructor
	Task: Establishes EST as default zone and zero to hour, minute and second from the base class
	@Parameters:
***************************/
ExtTime::ExtTime(){
	zone = EST;
}


/***************************
setTime method
	Task: Set the time
	@Parameters:
		hh: hours
		mm: minutes
		ss: seconds
		timeZone: time zone
	@returns
	
***************************/
void ExtTime::setTime(int hh, int mm, int ss, ZoneType timeZone){
	//Call the super base setTime method
	Time::setTime(hh, mm, ss);
	//Set the local attribute
	zone= timeZone;
}

/***************************
Zone method
	Task: Set the time
	@Parameters
	@returns
		zone: local time zone
	
***************************/
ZoneType ExtTime::Zone(){
	return zone;
}

/***************************
Write method
	Task: Print current time including the time zone
	@Parameters
	@returns
	
***************************/
void ExtTime::Write(){
	//Define the time zone array
	string zoneString[8] = {"EST", "CST", "MST", "PST", "CDT", "MDT", "PDT"};
	//Print standard time using the base class printStandard
	Time::printStandard();
	//Print the local time zone
	cout<< "  "<<zoneString[zone];
}

