/*************************************************************************
 * AUTHOR		: Debaggis, JAY
 * STUDENT ID	: 389657, 298125
 * Lab #25		: Array Train
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/
#include "Lab25.h"
void PrintHeader (string asNameF, 	//IN & OUT - assignment name
				  char asTypeF, 	//IN & CALC - assignment type
				  int asNumF, 		//IN & OUT - assignment number
				  int numStudentsF)	//IN & CALC - num students

{

	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	: Programmer's Name
	 * PROGRAMMER2	: Second Programmer's Name (optional)
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 ****************************************************************/

	//GOBAL CONSTANTS FOR HEADER
	const char PROGRAMMER[30]	= "Jay";
	const char PROGRAMMER2[30]  = "Debaggis";
	const char CLASS[5]			= "CS1A";
	const char SECTION[25]		= "MW: 10 a - 11:50 a";

	// OUTPUT - Class Heading
	cout << left;
	cout << "****************************************************";
	cout << "\n*	PROGRAMMED BY : " << PROGRAMMER;

	if (numStudentsF == 2)
	{
		cout << " & " << PROGRAMMER2;
	}

	cout << "\n*	" << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*	" << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*	";
	if(asTypeF == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNumF << ": " << asNameF;
	cout << "\n****************************************************\n\n";
	cout << right;

}



