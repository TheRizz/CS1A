/*************************************************************************
 * AUTHOR		: Debaggis, Dee
 * STUDENT ID	: 389657, 298125
 * Lab #24		: Intro to Arrays
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/

#include "Lab24.h"

/**********************************************************
 *
 * FUNCTION  Outputs the class header
 *_________________________________________________________
 * Outputs the class header
 *_________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading.
 ***********************************************************/
void ClassHeader()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	  : Programmer's Name
	 * CLASS		  : Student's Course
	 * SECTION		  : Class Days and Times
	 * LAB_NUM		  : Lab Number (specific to this lab)
	 * LAB_NAME		  : Title of the Lab

	 ********************************************************************/

	const char PROGRAMMER[30] = "Dee, Debaggis";
	const char CLASS[5] = "CS1A";
	const char SECTION[25] = "MW: 10:00a - 12:00p";
	const int LAB_NUM = 24;
	const char LAB_NAME[25] = "Intro to Arrays";

	cout << left;
	cout << "**************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  ASS #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n**************************************************\n\n";
	cout << right;
}
