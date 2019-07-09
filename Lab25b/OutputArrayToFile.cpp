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
 * FUNCTION  OutputArrayToFile
 *________________________________________________________________________
 * This function outputs the arrays to a text file
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	int intArF[]			: Must be previously defined
 *	string strArF [] 		: Must be previously defined
 *	const int AR_SIZEF		: Must be previously defined
 *	const string OUTPUT_FILE: Must be previously defined
 * POST-CONDITIONS
 * 	<Outputs the arrays in to a text file.>
 ************************************************************************/

void OutputArrayToFile (
			  int intArF[],				// IN  - integer array
			  string strArF[],			// IN  - string array
			  const int AR_SIZEF,		// IN  - array size
			  ofstream &oFileF)			// IN - output text file
{
	const int COL_WIDTH = 10;	// CALC - size of column

	int indexF;

	oFileF << left;
	oFileF << setw(COL_WIDTH) << "NAME" << setw(COL_WIDTH) << "AGE";
	oFileF << "\n____________________\n";

	// This loop will cycle through all of the value in the arrays
	for(indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		oFileF << setw(COL_WIDTH) << strArF[indexF]
			  << setw(COL_WIDTH) << intArF[indexF] << endl;
	}	// End for

	oFileF << right << endl;
}
