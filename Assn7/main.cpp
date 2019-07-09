/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn #7		: Repetition
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/08/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Repetition
 * _______________________________________________________________________
 * This program receives five grades as inputs, converts them to numerical
 * grades, then calculates the total, as well as the average, and outputs
 * both the total and the average. The program does this whole process
 * three times.
 * _______________________________________________________________________
 * INPUT:
 * 		grade			: The user's letter grade.
 *
 * OUTPUT:
 * 		gradeTotal		: The total number of all the number grades
 * 							 added up.
 * 		gradeAverage	: The average of the number grades.
 ************************************************************************/
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
	 * ALLOWANCE      : The allowance given to the user for this week
	 * COUNT_BEGIN    : Gives the count an initiating value
	 * COUNT_END_ONE  : Lets the count know when to end loop one
	 * COUNT_END_TWO  : Lets the count know when to end loop two
	 * SET_WIDTH	  : Sets the width for the setw
	 * GRADE_F		  : Gives the value 0 to assign to the letter F
	 * GRADE_D		  : Gives the value 0 to assign to the letter D
	 * GRADE_C		  : Gives the value 0 to assign to the letter C
	 * GRADE_B		  : Gives the value 0 to assign to the letter B
	 * GRADE_A		  : Gives the value 0 to assign to the letter A
	 ********************************************************************/


	const char  PROGRAMMER [30]	= "Debaggis";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 7;
	const char  LAB_NAME [25]	= "Repetition";
	const int   COUNT_BEGIN     = 1;
	const int   COUNT_END_ONE	= 3;
	const int   COUNT_END_TWO	= 5;
	const int   SET_WIDTH       = 20;
	const int   GRADE_F			= 0;
	const int   GRADE_D			= 1;
	const int   GRADE_C			= 2;
	const int   GRADE_B			= 3;
	const int   GRADE_A			= 4;

	/********************************************************************/
	 //Variables

	char  grade; 			// INPUT & CALC -  The user's input grade
	int   gradeVal; 		// CALC - 		   The grade value assigned to
							//				   the input grade
	int   countOne; 		// CALC -		   The counter for the first
							//				   loop
	int	  countTwo; 		// CALC - 		   The counter for the second
							//				   loop
	int	  totalGrade; 		// CALC & OUTPUT - An accumulator of the total
							//				   grade values
	float averageGrade; 	// CALC & OUTPUT - The average of the grade
							//					values per loop
/*************************************************************************/

	// OUTPUT - Class Heading
	cout << left;
	cout << "******************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  ASN #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n******************************************************\n\n";
	cout << right;




	//	INPUT - Input a grade each time you are prompted to, there should
	//			be a total of 15 grades inputed by the end of this
	//			program

	// This loop ensures that the program runs three times in a row
	for(countOne = COUNT_BEGIN ; countOne <= COUNT_END_ONE;
		countOne = countOne +1)
	{
		totalGrade = 0; // Initializes the totalGrade counter for each
						// loop that is run
		cout << "TEST #" << countOne << ":\n";
		// This loop makes sure to run through five grades.
		for(countTwo = COUNT_BEGIN ; countTwo <= COUNT_END_TWO;
			countTwo = countTwo + 1)
		{
			cout << setw(SET_WIDTH) << "\tEnter Letter Grade #"
				 << countTwo << ": ";
			cin.get(grade);
			cin.ignore(1000,'\n');

			//PROCESSING - This calculates what value the grade should
			//             take on when the user inputs a certain grade
			//			   character
			if(grade <= 'C')
			{
				if(grade <= 'B')
				{
					if(grade < 'A')
					{
						cout << "ERROR\n";
					} // if(grade > 'A') True
					else
					{
						if(grade == 'A')
						{
							gradeVal = GRADE_A;
						}
						else
						{
							gradeVal = GRADE_B;
						}
					} // if(grade > 'A') False
				} // if(grade >= 'B') True
				else
				{
					gradeVal = GRADE_C;
				} // if(grade >= 'B') False
			} // if(grade >= 'C') True
			else
			{
				if(grade == 'D')
				{
					gradeVal = GRADE_D;
				} // if(grade == 'D') True
				else
				{
					if(grade == 'F')
					{
						gradeVal = GRADE_F;
					} // if(grade == 'F') True
					else
					{
						cout << "ERROR\n";
					} // if(grade == 'F') False
				} // if(grade == 'D') False
			} // if(grade >= 'C') False

			totalGrade = totalGrade + gradeVal;

		} // for (count = COUNT_BEGIN ; count <= COUNT_END_TWO)

		// Setting the format to properly output two places past the
		// decimal
		cout << setprecision(2) << fixed;

		// OUTPUT - Outputs the total and average values after each time
		//			the first loop goes around
		averageGrade = float(totalGrade) / (countTwo - 1);
		cout << "\n\tTotal Grade Points: " << totalGrade << endl;
		cout << "\tGrade Point Average: " << averageGrade;
		cout << endl << endl << endl;

		// Returning the format to default
		cout << setprecision(6) << fixed;

	} // for (count = COUNT_BEGIN ; count <= COUNT_END_ONE)
return 0;
}

