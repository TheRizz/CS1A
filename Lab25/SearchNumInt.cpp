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
 * FUNCTION  Search Number of Integers
 *_________________________________________________________
 * This function searches through a number of integers and
 *	outputs the number of instances of an age until -1 is input
 *_________________________________________________________
 * PRE-CONDITIONS
 *  const int intArF[]  : The name of the numbers array
 *  const int AR_SIZEF	: The size of the array
 *  int searchNumF		: The number to be searched for
 *  int searchCountF	: The number of times the search number is found
 *  int indexCountF		: The counter to be used on the loop
 * POST-CONDITIONS
 * 	Outputs the number of instances of the input search number and
 * 	will continue to do so until a user inputs "-1"
 ***********************************************************/
void SearchNumInt(const int intArF[], // CALC - The number array
				  const int AR_SIZEF) // CALC - The size of the array
{
	int searchNumF;  // The number to be searched for
	int searchCountF;// The number of times the serch number is found
	int indexCountF; // The counter to be used on the loop

	cout << "\nThis will show the number of instances"
				" of the age you search.\n";
	cout << "What number do you want to search for? (enter -1 to exit): ";

	// Reads in the number that the user wishes to search for
	cin >> searchNumF;

	// PROMPTS user to search for a name within the index until "done"
	while (searchNumF != -1)
	{
		searchCountF = 0; // Initiates the search count
		indexCountF  = 0; // Initializes the index count

		// SEARCHES for user's input by checking each index file for a match
		for (indexCountF = 0; indexCountF < AR_SIZEF; indexCountF ++)
		{
			if (intArF[indexCountF] == searchNumF)
			{
				searchCountF ++;
			}
		}

		// SELECTS appropriate output depending on index count of user's search
		if (searchCountF > 0)
		{
			cout << "The number of instances of age ";
			cout << searchNumF;
			cout << " is ";
			cout << searchCountF << ".\n\n";

		}

		else
		{
			cout << "The number is not in the list.\n\n";
		}

		// Changes the search number at then end of the while loop
		cout << "What number do you want to search for? "
				"(enter -1 to exit): ";
		cin >> searchNumF;
	}
}
