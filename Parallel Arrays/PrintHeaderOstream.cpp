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
 * FUNCTION PrintHeaderOstream
 * _______________________________________________________________________
 * This function receives an assignment name, type and number then outputs
 * 		the appropriate header - returns nothing. - uses ostream
 * _______________________________________________________________________
 * PRE_CONDITIONS
 * 		asName			-	Assignment Name
 * 		asType			-	Assignment Type
 * 		asNum 			-	Assignment Num
 *
 * POST_CONDITIONS
 * 		This function will output the class heading.
 *
 *************************************************************************/
void PrintHeaderOstream (ostream &oFile,
				         const string asName, // IN - assignment Name
				         const char asType,   // IN - assignment type
				  	  	  	  	       //	   - (LAB or ASSIGNMENT)
				         const string asNum) // IN - assignment number

{
	oFile << left;
	oFile << "**************************************************";
	oFile << "\n* PROGRAMMED BY : Debaggis";
	oFile << "\n* " << setw (14) << "CLASS" <<": CS1A";
	oFile << "\n* " << setw (14) << "Section" << ": MW 10:00a - 12:00p";
	oFile << "\n* ";

	if (toupper(asType) == 'L')
	{
		oFile << "LAB #" << setw(9);
	}
	else
	{
		oFile << "ASSIGNMENT #" << setw(2);
	}
	oFile << asNum << ": " << asName;
	oFile << "\n**************************************************\n\n";
	oFile << right;
}
