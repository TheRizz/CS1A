/*************************************************************************
 * AUTHOR		: Debaggis, r34robotor
 * STUDENT ID	: 389657, 361170
 * Assn #7		: Repetition
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/06/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Repetition - Buddy's Average Sheep Age Calculator
 * _______________________________________________________________________
 * This program should help Buddy minimize input errors by error checking
 * 	the age for him. The program will accept as many ages as Buddy needs
 * 	to input and should let Buddy know if the average age indicates if
 * 	his sheep are aging, young, or middle-aged.
 * _______________________________________________________________________
 * INPUT:
 * 		sheepAge		: The sheep's age
 *
 * OUTPUT:
 * 		averageAge		: The total number eggs
 * 		age				: The number of dozens of eggs
 * 		ERROR			: In case the sheep age is too large
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
	 * ERROR		: Message that shows up when sheep age is too old
	 * OUTPUT_TXT	: Use to output the text before the population
	 * 				  description.
	 * COUNT_BEGIN	: Starts the counter
	 * COUNT_END	: Ends the counter
	 ********************************************************************/


	const char  PROGRAMMER [30]	= "Debaggis, r34robotor";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 19;
	const char  LAB_NAME [25]	= "Repetition";
	const int   COUNT_BEGIN     = 1;
	const int   COUNT_END		= 3;
	const char  ERROR[73]		= "\n*** Invalid sheep age - please input "
								  "a value less than or equal to 9!\n\n";
	const char  OUTPUT_TXT [28] = "\tIn general your sheep are ";

//----------------------------------------------------------------------

	int 	sheepAge;	 // INPUT & CALC  - The sheep's age
	int  	totalAge;    // CALC & OUTPUT - The total  age of the sheep
	int 	totalSheep;  // CALC & OUTPUT - The total number of sheep
	int		count; 		 // CALC -			Counts the number of tests for
						 //					the for loop
	float   averageAge;  // CALC & OUTPUT - The average number of sheep age

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




	//	INPUT - Takes in the sheep ages and prepares to calculate total
	//				and average
	//  PROCESSING - Included in INPUT codes.

	// This will run the program three times
	for(count = COUNT_BEGIN ; count <= COUNT_END ; count = count + 1)
	{
		totalAge = 0;
		totalSheep = 0;
		cout << left << "TEST #" << count << ":\n";
		cout << "Welcome to Buddy\'s Average Sheep Age Calculator!\n";
		cout << "\n\tEnter in the sheep ages, input -1 to exit\n";

		cout << "\tSheep Age: ";
		cin >> sheepAge;

		// This runs the program until the user inputs a negative number
		while(sheepAge >= 0)
		{
			if(sheepAge > 9) // This filters out any number that is larger
			{				 //  than the age a sheep can live
				do
				{
					if(sheepAge > 9)
					{
						cout << ERROR;
					}
					cout << "\tSheep Age: ";
					cin >> sheepAge;
				}while(sheepAge > 9);
			}

		totalAge = totalAge + sheepAge;
		totalSheep = totalSheep + 1;

		cout << "\tSheep Age: ";
		cin >> sheepAge;

		} // close while loop(sheepAge >= 0)

		// Changes the format to be able to produce the necessary output
		averageAge = float(totalAge) / totalSheep;

		cout << setprecision(1) << fixed;
		cout << "\n\n\tOn average your sheep are " << averageAge
			 << " years old!\n";
		if(averageAge <= 3)
		{
			cout << OUTPUT_TXT << "BABIES!\n\n\n\n";
		} // if(averageAge <= 3) True
		else
		{
			if(averageAge <= 6)
			{
				cout << OUTPUT_TXT << "MIDDLE-AGED!\n\n\n\n";
			} // if(averageAge <= 6) True
			else
			{
				cout << OUTPUT_TXT << "AGING - time to breed!\n\n\n\n";
			} // if(averageAge <= 6) False
		} // if(averageAge <= 3) False
	} // for(count = COUNT_BEGIN ;

// OUTPUT - Output the closing statement preceding the output for average
// 			and the population description.

	cout << "Thank you for using Buddy\'s Average Sheep Age "
			"Calculator!\nHave a great day!! :)";
	cout << setprecision(6);
	cout.unsetf(ios::fixed);
	cin.ignore(1000,'\n');

	return 0;
}

