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
 * FUNCTION  InitializeStrAr
 *________________________________________________________________________
 * This function initialized a string array
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	string strArF[]		: Must be previously defined
 *	const int AR_SIZEF	: Must be previously defined
 * POST-CONDITIONS
 * 	<Initializes the string array by clearing the memory space.>
 ************************************************************************/

void InitializeStrAr (string strArF [], 	// IN - string array
					  const int AR_SIZEF)	// IN - array size
{
	int indexF;		// CALC - counter for the for loop

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		strArF[indexF].clear();
	}	// End for
}
