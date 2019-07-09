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
 * FUNCTION  Outputs the largest number
 *_________________________________________________________
 * Outputs the value to help indicate to the array which number in the
 * 		array is the largest number of them all
 *_________________________________________________________
 * PRE-CONDITIONS
 *	const int intArF[] : The number array to be used in the function
 *  const int AR_SIZEF : The array size
 *	int largestNum	   : The largest number count number of the array
 *	int largestInt	   : The largest number accumulated
 *	int count		   : The counter for the loop
 * POST-CONDITIONS
 * 	This function will return the largest count number to be used in
 * 		the main function
 ***********************************************************/
int OutputLargestNum(const int intArF[], // CALC - The number array
		 	 	 	 const int AR_SIZEF) // CALC - The size of the array

{
	int largestNum; // Returns the largest count number of the array
	int largestInt;	// The largest number that is accumulated
	int count;		// The counter for the loop

	largestInt = intArF[0]; // Initializes largestInt

	// The counter runs through every number in the array and accumulates
	//		the largest number out of all of them
	for(count = 1 ; count < AR_SIZEF ; count ++)
	{
		if ( largestInt < intArF[count] )
		{
			largestInt = intArF[count];
			largestNum = count;
		}
	}
	return largestNum; // Returns the count number to be used in the
					   //  	 main function

}
