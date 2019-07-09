/*************************************************************************
 * AUTHOR		: Debaggis, GaryOak
 * STUDENT ID	: 389657, 1008554
 * Lab #23		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/20/2015
 ************************************************************************/

#ifndef HEADERFUNCTION_H_
#define HEADERFUNCTION_H_


#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;


/*************************************************************************
 * void ClassHeading()
 * _______________________________________________________________________
 * This function outputs the header and author box for the program.
 * _______________________________________________________________________
 * INPUT:
 * 		NA
 * OUTPUT:
 * 		the class heading is outputed
 ************************************************************************/
void ClassHeading()
{
	const char  PROGRAMMER [30]	= "Debaggis, GaryOak";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 23;
	const char  LAB_NAME [25]	= "Functions";
	cout << left;
	cout << "**************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  ASN #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n**************************************************\n\n";
	cout << right;
}

#endif
