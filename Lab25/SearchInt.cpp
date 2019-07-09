/*************************************************************************
 * AUTHOR		: Debaggis, JAY
 * STUDENT ID	: 389657, 298125
 * Lab #25		: Array Train
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/

#include "Lab25.h"
/**********************************************************
 *
 * FUNCTION  Searches for an Integer
 *_________________________________________________________
 * Searches through the array for a specific integer
 *_________________________________________________________
 * PRE-CONDITIONS
 *	const int intArF[]	: The name of the number array
 *	const int AR_SIZEF	: The size of the array
 *	int searchItemF		: The item to be searched for
 *	int index			: The counter for the loop
 *	bool findAge		: The variable to be used to exit the loop
 * POST-CONDITIONS
 * 	Outputs the number of times an integer is found
 ***********************************************************/

int SearchInt (const int intArF[], // CALC - The number array
		 	   const int AR_SIZEF, // CALC - The size of the array
		       int searchItemF)	   // CALC - The item to be searched for
{
	int index;   // The counter for the loop
	bool findAge;// The variable to be used to exit the loop

	index = 0; 		 // Initialized the counter
	findAge = false; // Initializes the boolean variable

	// This loop will keep counting until a specific integer has been found
	while (index < AR_SIZEF && !findAge)
	{
		if (intArF[index] == searchItemF)
		{
			findAge = true;
		}
		else
		{
			index ++;
		}
	}
	return index; // The count number to be returned to the main function
}
