/*************************************************************************
 * AUTHOR		: Debaggis, Beanstalk
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
 * INTRO TO FUNCTIONS
 * _______________________________________________________________________
 * This program receives two integers and calculates their sum, product,
 * the largest of the two integers, and the average.
 * _______________________________________________________________________
 * INPUT:
 * 		num1			: The first number that is input.
 * 		num2			: The second number that is input.
 *
 * OUTPUT:
 * 		sum				: The sum of the two integers.
 * 		product			: The product of the two integers.
 * 		largest			: The largest of the two integers.
 * 		average 		: The largest of the two integers.
 ************************************************************************/

//PROTOTYPES
int   AddTwoInts      (int num1, int num2);

int   MultiplyTwoInts (int num1, int num2);

int   FindLargest     (int num1, int num2);

float AverageTwoInts  (int num1, int num2);



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
	 * OUTPUTWIDTH	  : The width of the setw's for the outputs
	 * INPUTWIDTH	  : The width of the setw's for the inputs
	 ********************************************************************/


	const char  PROGRAMMER [30]	= "Debaggis, Beanstalk";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 22;
	const char  LAB_NAME [25]	= "Intro To Functions";
	const int   OUTPUTWIDTH	    = 22;
	const int   INPUTWIDTH		= 27;


	/********************************************************************/
	 //Variables

	int n1; 			// INPUT & CALC -  The first int to be input
	int n2; 			// INPUT & CALC -  The second int to be input
	int sum;			// OUT & CALC   -  The sum of the two ints
	int multiply;		// OUT & CALC   -  The product of the two ints
	int largest;		// OUT & CALC   -  The largest of the two ints
	float average;		// OUT & CALC   -  The average of the two ints

/*************************************************************************/

	// OUTPUT - Class Heading
	cout << left;
	cout << "******************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n******************************************************\n\n";
	cout << right;

	// INPUT - prompt user and read in two inputs
	cout << left;
	cout << setw(INPUTWIDTH) << "Enter the first integer: ";
	cin  >> n1;

	while (n1 != -999)	//loops until the user enters -999 for n1
	{
		cout << setw(INPUTWIDTH) << "Enter the second integer: ";
		cin  >> n2;
		cout << right;


		//PROCESSING - Calls the functions to provide the output
		sum      = AddTwoInts (n1 , n2);
		multiply = MultiplyTwoInts (n1 , n2);
		largest  = FindLargest (n1 , n2);
		average  = AverageTwoInts (n1 , n2);

		//spacing between input and output
		cout << endl;

		//OUTPUT - outputs the sum
		cout << left;
		cout << setw(OUTPUTWIDTH)  << "\nThe SUM is: ";
		cout << right << sum;

		cout << left;
		cout << setw(OUTPUTWIDTH) << "\nThe PRODUCT is: ";
		cout << right << multiply;

		cout << left;
		cout << setw(OUTPUTWIDTH) << "\nThe LARGEST is: ";
		cout << right <<largest ;

		cout << left;
		cout << setw(OUTPUTWIDTH) << "\nThe AVERAGE is: ";
		cout << right << average;

		//post test spacing
		cout << endl << endl << endl <<endl;

		// INPUT - prompt user and read in two inputs
		cout << left;
		cout << setw(INPUTWIDTH) << "Enter the first value: ";
		cin  >> n1;
	}    //while (n1 != -999)

	return 0;
}
// Find the sum of the two ints
int AddTwoInts (int num1, int num2)
{
	return num1 + num2;
}

// Finds the product of the two ints
int   MultiplyTwoInts (int num1, int num2)
{
	return num1 * num2;
}
// Calculates the largest of the two ints
int  FindLargest     (int num1, int num2)
{
	int largest;

	if (num1 > num2)
	{
		largest = num1;
	}
	else if (num2 > num1)
	{
		largest = num2;
	}
	else
	{
		cout << "Neither - the numbers are the same\n";
	}
	return largest;
}
// Calculates the average of the two ints
float AverageTwoInts  (int num1, int num2)
{
	float average;

	average = (float (num1) + num2) / 2;

	return average;
}




