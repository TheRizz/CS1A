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
 * FUNCTION  Searches for a String
 *_________________________________________________________
 * This function searches for a specific string to be output
 *_________________________________________________________
 * PRE-CONDITIONS
 *  const string stringArF[] : The name of the string array
 *	const int AR_SIZEF		 : The size of the array
 *	string searchItemF		 : The item to be searched for
 *	int	   searchCountF		 : The counter for the loop
 *	bool   searchNameF		 : The variable to be used to exit the loop
 * POST-CONDITIONS
 * 	This function will output the instances of names found in this
 * 	array
 ***********************************************************/
void SearchStringAr(const string stringArF[], // CALC - The names array
					const int AR_SIZEF)		  // CALC - The array size
{
	string searchItemF;  // The item to be searched for
	int	   searchCountF; // The counter for the loop
	bool   searchNameF;	 // The variable to be used to exit the loop


	cout << "\nThis will search for someone by their name.\n";
	cout << "Who do you want to search for (enter done to exit)? ";
	cin.ignore(1000,'\n');

	// Read in the item that the user wishes to search
	getline(cin, searchItemF);

	// PROMPTS user to search for a name within the index until "done"
	while (searchItemF != "done")
	{
		searchCountF = 0;
		searchNameF = false;

		// Counts the number of instances that a name is found
		while(AR_SIZEF > searchCountF && !searchNameF)
		{
			if(searchItemF == stringArF[searchCountF])
			{
				searchNameF = true;
			}
			else
			{
				searchCountF ++;
			}
		}
		if(searchCountF < 7)
		{
			cout << "There is one instance of the name "
					<< stringArF[searchCountF] << endl << endl;
		}
		else
		{
			cout << "The name is not in the list.\n\n";
		}
		// Changes the input search item
		cout << "Who do you want to search for (enter done to exit)? ";
		getline(cin, searchItemF);
	}
}
