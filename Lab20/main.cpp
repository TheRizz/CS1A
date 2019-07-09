/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Lab  #20		: Boolean Expressions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/06/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
Problem #4

Lab#20

 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 ********************************************************************/


	const char  PROGRAMMER [30]	= "Debaggis";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 20;
	const char  LAB_NAME [25]	= "Boolean Expression";

//----------------------------------------------------------------------

	char 	classCode;
	bool 	invalid;

//----------------------------------------------------------------------

	// OUTPUT - Class Heading
	cout << left;
	cout << "******************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n******************************************************\n\n";
	cout << right;
//----------------------------------------------------------------------
	do
	{
		cout << left << "Input your class code ('F','S,'J','R'): ";
		cin.get(classCode);
		cin.ignore(100,'\n');
		invalid = classCode != 'F' &&
				   classCode != 'S' &&
				   classCode != 'J' &&
				   classCode != 'R';
		if(invalid)
		{
			cout << classCode << " is an INVALID INPUT - "
								 "Please try again!\n\n";
		}
	}while(invalid);
	cout << classCode << " is valid - thank you!";
	cout << right << endl << endl;
	cin.ignore(1000,'\n');

	return 0;
}

