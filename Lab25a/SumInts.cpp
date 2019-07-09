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
 * FUNCTION  Outputs the sum of the array of integers
 *_________________________________________________________
 * Outputs the sum of the array of integers
 *_________________________________________________________
 * PRE-CONDITIONS
 *		intArF[] :		This is the array list of ages to be used
 *		AR_SIZEF :		This is the size of the array
 * POST-CONDITIONS
 * 		This function should output the sum of all of the integers added
 * 		up in the array.
 ***********************************************************/
void SumInts(const int intArF[], // CALC - The number array
			 const int AR_SIZEF) // CALC - The size of the array

{
	int sum;  // The sum of all of the number added up
	int count;// The number counter that checks to make sure that the
			  //    for loop goes through each number

	// This for loop will accumulate all of the array values on to the
	//		variable sum
	for(count = 0 ; count < AR_SIZEF ; count ++)
	{
		sum += intArF[count];

	}
	// This will output the sum
	cout << "The sum of the ages is " << sum << '.';

}
