/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn #7		: Repetition
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/20/2015
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

void ClassHeading();

int  ConvertGradeLetterToGradeValue(char gradeLetter);

void CalculateTotalGradeAndGPA(int gradeCount, int gradeAccumulator);

char CheckIfValidGrade();

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
	 * COUNT_BEGIN    : Gives the count an initiating value
	 * COUNT_END_ONE  : Lets the count know when to end loop one
	 * COUNT_END_TWO  : Lets the count know when to end loop two

	 ********************************************************************/


	const int   COUNT_BEGIN     = 1;
	const int   COUNT_END_ONE	= 3;
	const int   COUNT_END_TWO	= 5;


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
/*************************************************************************/

	ClassHeading();


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
			grade = CheckIfValidGrade();
			//PROCESSING - This calculates what value the grade should
			//             take on when the user inputs a certain grade
			//			   character

			gradeVal = ConvertGradeLetterToGradeValue(grade);

			totalGrade = totalGrade + gradeVal;
			 // If an error is output then the program doesn't count
			 // this number so the user doesn't have to restart the
			 // whole program if they make a mistake

		} // for (count = COUNT_BEGIN ; count <= COUNT_END_TWO)

		// Setting the format to properly output two places past the
		// decimal
		cout << setprecision(2) << fixed;

		// OUTPUT - Outputs the total and average values after each time
		//			the first loop goes around

		CalculateTotalGradeAndGPA(countTwo, totalGrade);

		cout << endl << endl << endl;

		// Returning the format to default
		cout << setprecision(6) << fixed;

	} // for (count = COUNT_BEGIN ; count <= COUNT_END_ONE)
return 0;
}
// This program converts letter grades to assigned number grades
int ConvertGradeLetterToGradeValue(char gradeLetter)
{
	int gradeNum;
	switch (gradeLetter)
	{
			case 'A' : gradeNum = 4;
						break;
			case 'B' : gradeNum = 3;
						break;
			case 'C' : gradeNum = 2;
						break;
			case 'D' : gradeNum = 1;
						break;
			case 'F' : gradeNum = 0;
						break;
			default  : cout << "\tERROR\n";
					    gradeNum = -1;
						break;
	}
	return gradeNum;
}
// This program calculates the total grade points and the average
void CalculateTotalGradeAndGPA(int gradeCount, int gradeAccumulator)
{
	float averageGrade;

	averageGrade = float(gradeAccumulator) / (gradeCount - 1);
	cout << "\n\tTotal Grade Points: " << gradeAccumulator << endl;
	cout << "\tGrade Point Average: " << averageGrade;
}
// This program will check if the grade entered is valid
char CheckIfValidGrade()
{
	bool invalidGrade;
	char letterGrade;

	invalidGrade = true;

	do
	{
		cout << "\tEnter letter grade : ";

		cin.get(letterGrade);
		cin.ignore(1000,'\n');
		letterGrade = toupper(letterGrade);



		if(letterGrade =='A'
				|| letterGrade =='B'
				|| letterGrade == 'C'
				|| letterGrade =='D'
				|| letterGrade =='F')
		{
			invalidGrade = false;
		}
		else
		{
			cout << "\tError, Please enter in a valid grade\n";
		}
	}while(invalidGrade);

	return letterGrade;
}
// This program will output the class heading
void ClassHeading()
{
	const char  PROGRAMMER [30]	= "Debaggis, deerhunter";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 7;
	const char  LAB_NAME [25]	= "Repetition";
		cout << left;
		cout << "**************************************************";
		cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
		cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
		cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
		cout << "\n*  ASN #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
		cout << "\n**************************************************\n\n";
		cout << right;

}
