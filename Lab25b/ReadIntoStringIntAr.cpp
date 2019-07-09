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
 * FUNCTION  ReadIntoStringIntAr
 *________________________________________________________________________
 * This function reads in input from a text file to the arrays.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	int intArF[]			: Must be previously defined
 *	string strArF [] 		: Must be previously defined
 *	const int AR_SIZEF		: Must be previously defined
 *	const string INPUT_FILE	: Must be previously defined
 * POST-CONDITIONS
 * 	<Assigns arrays values from the input text file.>
 ************************************************************************/

void ReadIntoStringIntAr (int intArF[],				// IN - integer array
						  string strArF[],			// IN - string array
						  const int AR_SIZEF,		// IN - array size
						  const string INPUT_FILE)	// IN - input text name
{
	int indexF;					// CALC - counter for the for loop
	ifstream iFile;				// IN 	- input text
	iFile.open(INPUT_FILE.c_str());

	// Reads input to arrays from input file
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		getline(iFile, strArF[indexF]);
		iFile >> intArF[indexF];
		iFile.ignore(1000, '\n');
		iFile.ignore(1000, '\n');
	}

	iFile.close();

}
