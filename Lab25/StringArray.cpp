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
 * FUNCTION  Gets an array of names
 *_________________________________________________________
 * This will output a number of prompts that ask the user to input
 * names to be used later on in the program
 *_________________________________________________________
 * PRE-CONDITIONS
 *	string stringArF[]	: The name of the number array
 *	const int AR_SIZEF	: The size of the array
 *	int count		    : The counter for the loop
 * POST-CONDITIONS
 * 	Passes an array by reference to store the values in the main function
 ***********************************************************/
void GetStringArray(string stringArF[], // CALC - The names array
					const int AR_SIZEF)	// CALC - The array size
{
	int count; // The counter for the loop

	count = 0; // The counter for the loop

	// Read in user input values for the array
	cout << "Please type the names you wish to enter:\n";
	for(count = 0; count < AR_SIZEF; count ++)
	{
		cout << "Name #" << count +1 << ": ";
		getline (cin, stringArF[count]);
	}
}
