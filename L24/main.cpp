/*************************************************************************
 * AUTHOR		: Debaggis, Dee
 * STUDENT ID	: 389657, 298125
 * Lab #24		: Intro to Arrays
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/
#include "Lab24.h"
/*************************************************************************
 * Intro to Arrays
 * _______________________________________________________________________
 * This program reads in a list of 10 names as an input from a user and
 * places them in an array. It will prompt for a name and return the
 * number of times that name was entered in the list. The program should
 * output the total number of instances of that name, and then prompt for
 * another name until the word "done" is typed in.
 * _______________________________________________________________________
 * INPUT:
 * 		namesAR: The name the user inputs
 * 		searchItem: The name the user searches for
 *
 * OUTPUT:
 * 		searchCount: The amount of times a name occurs
 * 		searchItem: The name the user searches for
 *
 ************************************************************************/
int main()
{

	/*********************************************************************/
	//Variables
	string namesAr[10]; // INPUT & CALC	 - The input names
	string searchItem;	// INPUT & CALC	 - The number of rounds that
						//				   the user wishes to play
	int searchCount; 	// CALC & OUT    - The index # searched in the array
	int inputCount;		// CALC - Cycles the counter for inputs
	int indexCount;		// CALC - Cycles the counter to search the list
	/*********************************************************************/

	// OUTPUTS class header
	ClassHeader();

	inputCount = 0;

	// PROMPTS the user 10 times to create list of names
	for (inputCount = 0; inputCount < 10; inputCount++)
	{
		cout << left << "Enter name #" << inputCount + 1 << ": ";
		getline(cin, namesAr[inputCount]);
	}

	cout << endl;
	cout << "Who do you want to search for (enter done to exit)? ";

	getline(cin, searchItem);

	// PROMPTS user to search for a name within the index until "done"
	while (searchItem != "done")
	{
		searchCount = 0;
		indexCount = 0;

		// SEARCHES for user's input by checking each index file for a match
		for (indexCount = 0; indexCount < 10; indexCount++)
		{
			if (namesAr[indexCount] == searchItem)
			{
				searchCount++;
			}
		}

		// SELECTS appropriate output depending on index count of user's search
		if (searchCount > 1)
		{
			cout << "There are ";
			cout << searchCount;
			cout << " instances of the name ";
			cout << searchItem << ".\n\n";

		}
		else if (searchCount == 1)
		{
			cout << "There is ";
			cout << "one";
			cout << " instance of the name ";
			cout << searchItem << ".\n\n";

		}
		else
		{
			cout << searchItem << "\'s name does not exist in this list.\n \n";
		}

		cout << "Who do you want to search for (enter done to exit)? ";
		getline(cin, searchItem);
	}

	cout << "\nThank you for using my program.";
	cin.ignore(1000,'\n');
	cout << right;

	return 0;
}

/*************************************************************************
 * INPUT:
 * 	The user inputs a name that is to be listed in the array, and then
 * inputs a name to search for
 *
 * PROCESSING:
 * 	Takes the user's input names that are stored in to the list and compares
 * them to the search name that the user inputs. If the comparison is
 * valid then a counter will increment. If not then the process will
 * move on and check the next name until the loop has finished and
 * all of the names have been checked.
 *
 * OUTPUT:
 * 	The program outputs the number of times the name occurs in the list,
 * and the name they searched for
 *
 ************************************************************************/

