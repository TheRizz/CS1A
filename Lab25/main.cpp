/*************************************************************************
 * AUTHOR		: Debaggis, JAY
 * STUDENT ID	: 389657, 298125
 * Lab #25		: Array Train
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/
#include "Lab25.h"
/*************************************************************************
 * Array Train
 * _______________________________________________________________________
 * This program reads in a list of names and ages and then calculates
 * the first instance of an age, the number of instances of age, searches
 * for a specific person, finds the oldest person, find the youngest person
 * and then sums the array of the ages.
 * _______________________________________________________________________
 * INPUT:
 * 		searchName: The name the user searches for
 * 		searchNum : The number the user searches for
 *
 * OUTPUT:
 *
 ************************************************************************/
int main()
{
/************************************************************************
 * CONSTANTS
 * _______________________________________________________________________
 *
 * const int AR_SIZE = 7  : The constant size for the array
 *
*************************************************************************/

	const int AR_SIZE = 7;

/************************************************************************/
//  VARIABLES

	string stringAr[AR_SIZE]; // IN - The array of names
	int    intAr   [AR_SIZE]; // IN - The array of ages
	int    searchNum;		  // IN - The number to be searched for
	string searchName;		  // IN - The name to be searched for
	int locationPlace;		  // IN - The location of the array to be used

/************************************************************************/

	// This outputs the header for the output file
	PrintHeader("Array Train", 'L', 25, 2);

	// This reads in the inputs by the user and then saves them in to
	// an array in the main function
	GetStringArray(stringAr, AR_SIZE);

	// This reads in the inputs by the user and then saves them in to
	// an array in the main function
	GetStringInt(intAr, AR_SIZE);

	cout << "\nThis will search for the first instance of a number found"
			" in the array.";

	cout << "\nEnter the number you want to search for"
				"(enter -1 to exit): ";
	cin >> searchNum;

	// Runs a loop to keep asking for a number to search for until -1
	//	is input
	while (searchNum != -1)
	{

		// This function gives back the storage location where the proper
		//   array value is located to be used in the main function
		locationPlace = SearchInt(intAr, AR_SIZE, searchNum);

		// Will output an error if the location place is not a valid number
		if(locationPlace != AR_SIZE)
		{
			cout << "The first instance of age " << searchNum
					<< " is the #";
			cout << locationPlace + 1 << " person and the name is " <<
			stringAr[locationPlace] << ".\n";
		}
		else
		{
			cout << "The number is not in the list.\n";
		}
		cout << "\nEnter the number you want to search for"
					"(enter -1 to exit): ";
		cin >> searchNum;
	}

	// This will search for the number of instances a certain age is found
	SearchNumInt(intAr, AR_SIZE);

	// This searches for a specific string in the array of strings
	SearchStringAr(stringAr, AR_SIZE);

	// This will place the proper storage location to be used in the output
	locationPlace = OutputLargestNum (intAr, AR_SIZE);

	cout << endl << "The oldest person in the group is "
		 << stringAr[locationPlace] << " at the age of "
		 << intAr[locationPlace];

	// This will place the proper storage location to be used in the output
	locationPlace = OutputLowestNum(intAr, AR_SIZE);

	cout << endl << endl << "The youngest person in the group is "
		 << stringAr[locationPlace] << " at the age of "
		 << intAr[locationPlace] << endl << endl;

	// This outputs the sum of all of the integers in the integer array
	SumInts(intAr, AR_SIZE);

	return 0;
}



