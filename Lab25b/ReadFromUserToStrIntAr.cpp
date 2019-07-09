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
 * FUNCTION  ReadFromUserToStrIntAr
 *________________________________________________________________________
 * This function reads inputs from the user in to the arrays
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	int intArF[]			: Must be previously defined
 *	string strArF [] 		: Must be previously defined
 *	const int AR_SIZEF		: Must be previously defined
 * POST-CONDITIONS
 * 	<Assigns arrays values from the user input.>
 ************************************************************************/

void ReadFromUserToStrIntAr(
		int intArF[],				// IN - integer array
		string strArF[],			// IN - string array
		const int AR_SIZEF)			// IN - array size
{
	const int COL_WIDTH = 6;
	int indexF;		// CALC - The counter for the loop
	string input;	// CALC - Checks the LCV for the while loop

	indexF = 0;

	cout << left;
	cout << "Type \"done\" if done entering inputs\n";
	cout << setw(COL_WIDTH) <<  "Name" << "#" << indexF + 1 << ": ";
	getline(cin, input);

	// Loops until the user types "done" or the array runs out of space
	while(input != "done" && indexF < AR_SIZEF)
	{
		strArF[indexF] = input;
		cout << setw(COL_WIDTH) << "Age" << "#" << indexF + 1 << ": ";
		cin  >> intArF[indexF];
		cin.ignore(1000,'\n');

		cout << endl;

		indexF ++; // Increments the counter
		if(indexF < AR_SIZEF)
		{
			cout << "Type \"done\" if done entering inputs\n";
			cout << setw(COL_WIDTH) <<  "Name" << "#" << indexF + 1 << ": ";
			getline(cin, input);
		}
	}	// end while

	cout << endl;
	cout << right;
}
