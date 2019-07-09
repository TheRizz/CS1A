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
 *
 * FUNCTION  InitializeIntAr
 *________________________________________________________________________
 * This function initialized an integer array
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	int intArF[]		: Must be previously defined
 *	const int AR_SIZEF	: Must be previously defined
 * POST-CONDITIONS
 * 	<Initializes the array to -1>
 ************************************************************************/
void StoreStrIntIntAr(int intBalArF[], 			// IN - integer array
					  int intIdArF[],
					  string stringArF[],
					  const int AR_SIZEF,	// IN - array size
					  const string iFileF)
{
	ifstream iFile;
	int indexF; // CALC - This is the counter for the for loop
	iFile.open(iFileF.c_str());

	// This loop initializes all of the values in the integer array to -1
	for(indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		getline(iFile, stringArF[indexF]);
		iFile >> intIdArF[indexF];
		iFile >> intBalArF[indexF];
		iFile.ignore(1000,'\n');
	} // End for
	iFile.close();
}
