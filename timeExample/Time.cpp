/*************************
Universidad Ana G. Méndez
Gurabo Campus
COMP 315 - Introduction to data structures and Algoritms
Spring 2019

This header file declares the Time Class

**************************/

//Reference the super class header file
#include "Time.h"

/****************
	Default constructor
	Task: assign zero to hour, minute, second 
*********/
Time::Time()
{
	hour = minute = second = 0;
}

/*****
	setTime method
	Task: set the hour, minute, and seconds
		params: 
			hh: hour
			mm: minutes
			ss: seconds
*******/
void Time::setTime(int hh, int mm, int ss)
{
	hour = minute = second = 0;
	if((hh>=0) && (hh<24))
	{
		hour = hh;
	}
	if((mm>=0) && (mm<60))
	{
		minute = mm;
	}
	if((ss>=0) && (ss<60))
	{
		second = ss;
	}
}

/****
	printMilitary method
	task: Print time using the military format (24 hours)
******/
void Time::printMilitary()
{
	cout<<hour<<":"<<minute<<":"<<second;
}

/********
	printStandard method
	task: Print time using the standard format (12 hours AM/PM)
*******/ 
void Time::printStandard()
{
	if (hour<12)
	{
		cout<<hour<<":"<<minute<<":"<<second<<" AM";
	}else if (hour==12){
		 cout<<hour<<":"<<minute<<":"<<second<<" PM";
		} else
		{
			cout<<hour-12<<":"<<minute<<":"<<second<< " PM";
		}
}
