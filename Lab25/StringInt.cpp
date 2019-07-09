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
 * FUNCTION  Gets an array of integers
 *_________________________________________________________
 * This will output a number of prompts that ask the user to input
 * numbers to be used later on in the program
 *_________________________________________________________
 * PRE-CONDITIONS
 *	int intArF[]		: The name of the number array
 *	const int AR_SIZEF	: The size of the array
 *	int count			: The counter for the loop
 * POST-CONDITIONS
 * 	Passes an array by reference to store the values in the main function
 ***********************************************************/
void GetStringInt(int intArF[], 	  // CALC - The number array
				  const int AR_SIZEF) // CALC - The size of the array
{
	int count; // The counter for the loop

	count = 0; // Initializes the counter

	// Read in user input values for the array
	cout << "\nPlease type the ages you wish to enter:\n";
	for(count = 0; count < AR_SIZEF; count ++)
	{
		cout << "Age #" << count +1 << ": ";
		cin >> intArF[count];
	}
}
