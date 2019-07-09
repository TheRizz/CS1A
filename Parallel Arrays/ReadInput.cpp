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
 * FUNCTION ReadInput
 * _______________________________________________________________________
 * This function reads in values from input file "InFile.txt"
 * _______________________________________________________________________
 * PRE_CONDITIONS
 *		nameAr[index] 		:	Reads in names from input file
 *		intIdAr  [index]	:	Reads in IDs from input file
 *		intBalAr [index]	:	Reads in balances from input file
 *		ARRAY_SIZE			:	Used in For Loop
 *
 * POST_CONDITIONS
 *	<none>
 *************************************************************************/

void ReadInput (string nameAr[],	// IN 	- reads in names
				int intIdAr[],			// IN 	- reads in IDs
				float intBalAr[],		// IN   - reads in balances
				const int ARRAY_SIZE,   // CALC - used in for loop
				string&inFileName)

{
	ifstream inFile;

	// OPENS INPUT FILE
	inFile.open(inFileName.c_str());


	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		getline(inFile, nameAr[index]);
		inFile >> intIdAr[index];
		inFile >> intBalAr[index];
		inFile.ignore(1000,'\n');
	} // END FOR LOOP

	// CLOSE FILE
	inFile.close();

}
