/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #0		: Eclipse Lab
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 08/20/2015
 ************************************************************************/

	#include <iostream>
	#include <iomanip>
	using namespace std;
	// Documentation that goes here will be discussed later
	int main()
	{
	 /*******************************************************
	 * CONSTANTS
	 * ----------------------------------------------------
	 * USED FOR CLASS HEADING – ALL WILL BE OUTPUT
	 * ----------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS : Student's Course
	 * SECTION : Class Days and Times
	 * LAB_NUM : Lab Number (specific to this lab)
	 * LAB_NAME : Title of the Lab
	 *****************************************************/
	 const char PROGRAMMER[30] = "Ryan Martinez";
	 const char CLASS[5] = "CS1B";
	 const char SECTION[25] = "MWF: 8:00a - 10:50a";
	 const int LAB_NUM = 0;
	 const char LAB_NAME[17] = "Eclipse Tutorial";
	 // OUTPUT – Class Heading
	 cout << left;
	 cout << "**************************************************";
	 cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	 cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	 cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	 cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	 cout << "\n**************************************************\n\n";
	 cout << right;
	 return 0;
}
