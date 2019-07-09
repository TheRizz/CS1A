/*************************************************************************
 * AUTHOR		: Debaggis, 127.0.1
 * STUDENT ID	: 389657, 1014688
 * Lab #25b		: Array Train
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 05/04/2015
 ************************************************************************/

#include "Lab25b.h"

/*************************************************************************
 *
 * FUNCTION  OutputArrayToConsole
 *________________________________________________________________________
 * This function outputs the arrays to the console.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	const int INT_AR[]		: Must be previously defined
 *	const string STR_AR[]	: Must be previously defined
 *	const int AR_SIZEF		: Must be previously defined
 *
 * POST-CONDITIONS
 * 	<Outputs arrays values to console.>
 ************************************************************************/
void OutputArrayToConsole (const int INT_AR[],	// IN - integer array
						 const string STR_AR[],	// IN - string array
						 const int AR_SIZEF)	// IN - size of array
{
	const int COL_WIDTH = 10;	// CALC - size of column
	int indexF;					// CALC - LCV for the for loop

	cout << left;
	cout << setw(COL_WIDTH) << "NAME" << setw(COL_WIDTH) << "AGE";
	cout << "\n____________________\n";

	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		cout << setw(COL_WIDTH) << STR_AR [indexF]
		     << setw(COL_WIDTH) << INT_AR [indexF] << endl;
	}	// End for

	cout << right << endl;
}
