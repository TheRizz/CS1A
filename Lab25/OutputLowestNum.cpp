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
 * FUNCTION  Outputs the lowest number
 *_________________________________________________________
 * Outputs the value to help indicate to the array which number in the
 * 		array is the lowest number of them all
 *_________________________________________________________
 * PRE-CONDITIONS
 *	const int intArF[] : The number array to be used in the function
 *  const int AR_SIZEF : The array size
 *	int lowestNum	   : The smallest number count number of the array
 *	int lowestInt	   : The lowest number accumulated
 *	int count		   : The counter for the loop
 * POST-CONDITIONS
 * 	This function will return the lowest count number to be used in
 * 		the main function
 ***********************************************************/
int OutputLowestNum(const int intArF[], // IN - The number array
		 	 	 	const int AR_SIZEF) // IN - The size of the array

{
	int lowestNum; // The lowest count number
	int lowestInt; // The lowest number accumulated
	int count;	   // The counter for the loop

	lowestInt = intArF[0]; // Initializes the lowestInt

	// The counter runs through every number in the array and accumulates
	//		the lowest number out of all of them
	for(count = 1 ; count < AR_SIZEF ; count ++)
	{
		if ( lowestInt > intArF[count] )
		{
			lowestInt = intArF[count];
			lowestNum = count;
		}
	}
	return lowestNum; // Returns the count number to be used in the main
					  //    function

}
