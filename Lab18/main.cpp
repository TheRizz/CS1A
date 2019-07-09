/*************************************************************************
 * AUTHOR		: Debaggis, tommyg93
 * STUDENT ID	: 389657, 913665
 * Assn #7		: Repetition
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/06/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Repetition
 * _______________________________________________________________________
 * This program takes the user's input number of eggs and calculates the
 * number of dozens of eggs as well as the excess leftover eggs, outputs
 * the average of the different harvests of eggs and calculates the
 * average of the harvests, and the whole test is run three times.
 * _______________________________________________________________________
 * INPUT:
 * 		numEggs			: The user's input number of eggs
 *
 * OUTPUT:
 * 		totalEggs		: The total number eggs
 * 		dozenEggs		: The number of dozens of eggs
 * 		modEggs			: The number of eggs leftover after the dozens
 * 		averageEggs		: The average number of eggs per harvest
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 * ALLOWANCE    : The allowance given to the user for this week
	 ********************************************************************/


	const char  PROGRAMMER [30]	= "Debaggis, tommyg93";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 18;
	const char  LAB_NAME [25]	= "Repetition";
	const int   COUNT_BEGIN     = 1;
	const int   COUNT_END		= 3;

//----------------------------------------------------------------------

	int 	numEggs;	 // INPUT & CALC  - The number of eggs input
	int  	totalEggs;   // CALC & OUTPUT - The total number eggs
	int 	dozenEggs; 	 // CALC & OUTPUT - The number of dozens of eggs
	int 	modEggs; 	 // CALC & OUTPUT - The number of eggs leftover
						 //					after the dozens
	int		count; 		 // CALC -			Counts the number of tests for
						 //					the for loop
	int     countEgg; 	 // CALC - 			Counts the number of tests in
						 //					the while loop
	float   averageEggs; // CALC & OUTPUT - The average number of eggs per
						 //					harvest

//----------------------------------------------------------------------

	// OUTPUT - Class Heading
	cout << left;
	cout << "******************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n******************************************************\n\n";
	cout << right;




	//	INPUT - This takes the number of eggs that the user inputs and
	//			calculates the dozens and leftover eggs.


	// This loop makes sure that the program runs three times
	for(count = COUNT_BEGIN; count <= COUNT_END; count = count + 1)
	{
		cout << left << "TEST #" << count << ':' << endl;
		cout << "Welcome to Aunt Ellen's eggs to dozens converter!\n";
		cout << endl;

		numEggs = 0;
		totalEggs = 0;
		countEgg = 0;

		// This loop makes sure that the user can input as many numbers of
		// egg harvests until they input a negative number
		while(numEggs >= 0)
		{
			cout << "\tEnter the number of eggs gathered: ";
			cin  >> numEggs;

			// Calculates the number of dozens of eggs as well as the
			// leftover eggs
			if(numEggs >=0)
			{
				totalEggs = totalEggs + numEggs;
				dozenEggs = numEggs / 12;
				modEggs = numEggs % 12;
				countEgg = countEgg + 1;
				cout << "\tYou have " << dozenEggs << " dozen " << modEggs
					 << " eggs." << endl << endl;
			} // if(numEggs >=0)
		} // while(numEggs >= 0)

		// Makes sure the total doesn't run unless there are eggs that
		// have been harvested
		if(countEgg > 0)
		{
			cout << fixed << setprecision(1);
			averageEggs = totalEggs / float(countEgg);
			dozenEggs = totalEggs / 12;
			modEggs = totalEggs % 12;
			cout << "TOTALS:\n";
			cout << "\tOn average " << averageEggs
				 << " eggs have been gathered." << endl;
			cout << "\t A total of " << dozenEggs << " and " << modEggs
				 << " eggs have been gathered!" << endl << endl << endl;
		} // if(countEgg > 0)
	} // for(count = COUNT_BEGIN)

	// Returns format to default
	cout << right << setprecision(6);
	cout.unsetf(ios::fixed);

return 0;
}
