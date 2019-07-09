#include "lab26.h"
void PrintHeader (string asName, 	//IN & OUT - assignment name
				  char asType, 		//IN & CALC - assignment type
				  int asNum, 		//IN & OUT - assignment number
				  int numstudents)	//IN & CALC - num students

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
	const char PROGRAMMER[30]	= "Debaggis";
	const char PROGRAMMER2[30]  = "Blue Hood";
	const char CLASS[5]			= "CS1A";
	const char SECTION[25]		= "MW: 10 a - 11:50 a";

	// OUTPUT - Class Heading
	cout << left;
	cout << "****************************************************";
	cout << "\n*PROGRAMMED BY : " << PROGRAMMER;

	if (numstudents ==2)
	{
		cout << " & " << PROGRAMMER2;
	}

	cout << "\n*" << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*" << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*";
	if(asType == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName;
	cout << "\n****************************************************\n\n";
	cout << right;

}



