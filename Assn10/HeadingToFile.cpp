/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn #10		: Parallel Array
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 05/06/2015
 ************************************************************************/

#include "Assn10.h"


/*************************************************************************
 * Function - Heading
 * _______________________________________________________________________
 * This function will output the class heading.
 * _______________________________________________________________________
 * PRE-CONDITION
 * 		oFileF: an output file must be previously defined
 * 		TYPE: a literal will be input
 * 		NUM: a literal will be input
 * __________________________________________________________________
 * POST-CONDITION
 * 		The function will output the class heading.
 ************************************************************************/
void HeadingToFile(
			 ofstream &oFileF,		// IN - output file
			 const char TYPE, 		// IN - type of assignment; 'L' for lab
			 	 	 	 	 	 	// 		'A' for assignment
			 const int NUM,			// IN - number of lab or assignment
			 const string NAME)		// IN - the name of the lab or assin
{
	/*********************************************************************
	 *CONSTANTS
	 *--------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 ********************************************************************/
	const char PROGRAMMER[30]	= "127.0.1, Debaggis";
	const char CLASS[5]			= "CS1A";
	const char SECTION[25]		= "MW 10:00a - 12:00p";

	oFileF << left;
	oFileF << "*********************************************************";
	oFileF << "\n* PROGRAMMED BY	: " << PROGRAMMER;
	oFileF << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	oFileF << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	if(TYPE == 'L')
	{
		oFileF << "\n* LAB #" << setw(9) << NUM << ": " << NAME;
	}
	else
	{
		oFileF << "\n* ASSIN #" << setw(7) << NUM << ": " << NAME;
	}
	oFileF << "\n*******************************************************"
				"**\n\n";
	oFileF << right;

}
