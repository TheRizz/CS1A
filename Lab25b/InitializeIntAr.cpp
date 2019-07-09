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
void InitializeIntAr(int intArF[], 			// IN - integer array
					 const int AR_SIZEF)	// IN - array size
{
	int indexF; // CALC - This is the counter for the for loop

	// This loop initializes all of the values in the integer array to -1
	for(indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		intArF[indexF] = -1;
	} // End for
}
