/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn #8		: Loops & Boolean Expressions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/20/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Loops & Boolean Expressions
 * _______________________________________________________________________
 *This program checks acceptance status of the user based on height
 *	and weight qualifications.
 * _______________________________________________________________________
 * INPUT:
 * 		gender			: The gender of the user.
 * 		height			: The height of the user.
 * 		weight			: The weight of the user.
 *
 * OUTPUT:
 * 		gradeTotal		: The total number of all the number grades
 * 							 added up.
 * 		gradeAverage	: The average of the number grades.
 ************************************************************************/

void ClassHeading();

int main()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	  : Programmer's Name
	 * CLASS		  : Student's Course
	 * SECTION		  : Class Days and Times
	 * LAB_NUM		  : Lab Number (specific to this lab)
	 * LAB_NAME		  : Title of the Lab
	 * INPUTS		  : Sets the width for the setw
	 ********************************************************************/

	const int   INPUTS       = 10;


	/********************************************************************/
	 //Variables

	int   weight; 			// INPUT & CALC -  The user's weight
	char  gender;			// INPUT & CALC -  The user's gender
	int   height;			// INPUT & CALC -  The user's height
	int   countCand;		// CALC  & OUT  -  The number of candidates
	int   acceptedCand;		// CALC			-  The number of accepted
							//				   candidates
	float percAccepted;		// CALC & OUT   -  Percentage of accepted
							//				   candidates
	bool  heightOK;			// CALC			-  Checks if the height is
							//				   an acceptable value or not
	bool  weightOK;			// CALC			-  Checks if the height is
							//				   an acceptable value or not
/*************************************************************************/

	// Initializes all of these values so that they can be used or
	// 	incrimented later on in the program.
	countCand = 0;
	acceptedCand = 0;

	ClassHeading(); // OUTPUT - This outputs the class heading and
					//				prepares to output the program

	cout << "Please enter the candidate's information (enter 'X' to "
			"exit).\n";

	// This reads in the first input outside of the first while loop
	cout << left << setw(INPUTS) << "Gender:";
	cin.get(gender);
	cin.ignore(1000,'\n');
	gender = toupper(gender);

	while(gender != 'X') // Cycles the loop until the user inputs X
	{					 // gender inputs
		heightOK = false;
		weightOK = false;

		if(gender != 'M' && gender != 'F')
		{
			while (gender != 'M' && gender != 'F') // Filters out any
			{									   // incorrect gender
					cout << "***** Invalid gender;"// inputs
							" please enter M or F *****\n";

				cout << setw(INPUTS) << "Gender:";
				cin.get(gender);
				cin.ignore(1000,'\n');
				gender = toupper(gender);

			} // while (gender != 'M' || gender != 'F')
		}

		//CALCULATION - This is where the inputs will be calculated and
		// 					the program will check eligibility

		// Calculates to see if the user is in the correct height range
		cout << setw (INPUTS) << "Height:";
		cin  >> height;
		if (height < 24 || height > 110)
		{
			while (height < 24 || height > 110)
			{
				cout << "***** Invalid height; please enter a height in "
						"inches between 24 and 110. *****\n";

				cout << setw (INPUTS) << "Height:";
				cin  >> height;
			}
		}
		// Calculates to see if the user is eligible or not
		if (gender == 'M' && height >= 65 && height <= 80
			|| gender == 'F' && height >= 62 && height <= 75)
		{
			heightOK = true;
		}
		// Calculates to see if the user is in the correct weight range
		cout << setw (INPUTS) << "Weight:";
		cin  >> weight;
		if (weight < 50 || weight > 1400)
		{
			while (weight < 50 || weight > 1400)
			{
				cout << "***** Invalid weight; please enter a weight in "
						"pounds between 50 and 1400. *****\n";

				cout << setw (INPUTS) << "Weight:";
				cin  >> weight;
			}
		}
		// Calculates to see if the user is eligible or not
		if (gender == 'M' && weight >= 130 && weight <= 250
			|| gender == 'F' && weight >= 110 && weight <= 185)
		{
			weightOK = true;
		}

		if( heightOK == true && weightOK == true)
		{
			cout << "\nThis candidate has been ACCEPTED!\n";
			acceptedCand ++; // Counts the number of accepted candidates
		}
		else if ( heightOK == true && weightOK == false)
		{
			cout << "\nThis candidate has been rejected "
					"based on the WEIGHT requirement.\n";
		}
		else if ( heightOK == false && weightOK == true)
		{
			cout << "\nThis candidate has been rejected "
					"based on the HEIGHT requirement.\n";
		}
		else if ( heightOK == false && weightOK == false)
		{
			cout << "\nThis candidate has been rejected based "
					"on the HEIGHT and WEIGHT requirements.\n";
		}

		cout << endl << endl;
		countCand ++; // Counts the number of candidates

		cout << "Please enter the candidate's information (enter 'X' to "
					"exit).\n";
		// Starts the loop statement over again at the end of the loop
		cout << left << setw(INPUTS) << "Gender:";
		cin.ignore(1000,'\n');
		cin.get(gender);
		cin.ignore(1000,'\n');
		gender = toupper(gender);

	} // while(gender != 'X')
	// OUTPUTS - This is where the system will do the final calculations
	//				and output the percentage of eligible candidates

	if(countCand > 0)
	{
		percAccepted = acceptedCand / float(countCand);
		percAccepted *= 100;
		cout << endl << setprecision(2);
		cout <<	acceptedCand << " candidate(s) accepted!\n";
		cout << "That's " << percAccepted << "%!";
	}
	cout << right << setprecision(6);
	cin.ignore(1000,'\n');
}
// This program will output the class heading at the top of the outputs.
void ClassHeading()
{
	const char  PROGRAMMER [30]	= "Debaggis";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 8;
	const char  LAB_NAME [30]	= "Loops & Boolean Expressions";
		cout << left;
		cout << "**************************************************";
		cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
		cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
		cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
		cout << "\n*  ASN #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
		cout << "\n**************************************************\n\n";
		cout << right;
}
