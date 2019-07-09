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
 * Array Train
 * _______________________________________________________________________
 * This program will be a compilation of 5 functions, which work with
 * parallel arrays (one integer array and one string array).
 * _______________________________________________________________________
 * INPUT:
 *
 * OUTPUT:
 *
 ************************************************************************/
int main()
{

	/*********************************************************************
	 * COSNTANTS
	 * ___________________________________________________________________
	 * AR_SIZE = 10 ; size of the parallel arrays
	 * INPUT_NAME = "input.txt" ; input file's name
	 ********************************************************************/
	const int AR_SIZE = 10;
	const string INPUT_NAME = "input.txt";
	const string OUTPUT_NAME = "output.txt";

	//Variables
	int intAr[AR_SIZE];			// IN & CALC - integer array
	string strAr[AR_SIZE];		// IN & CALC - string array
	ofstream oFile;

	// Open output text file
	oFile.open(OUTPUT_NAME.c_str());

	// OUTPUTS class header
	ClassHeader();
	HeadingToFile(oFile, 'L', 25, "Array Train Set #2");

	// Initializes both the int and string array
	// TASK #1
	InitializeIntAr(intAr, AR_SIZE);
	InitializeStrAr(strAr, AR_SIZE);
	InitializeIntStringAr(intAr, strAr, AR_SIZE);

	// Outputs the arrays to console
	OutputArrayToConsole(intAr, strAr, AR_SIZE);
	OutputArrayToFile (intAr, strAr, AR_SIZE, oFile);

	// Initialization of arrays
	InitializeIntStringAr(intAr, strAr, AR_SIZE);

	// TASK #2
	ReadIntoStringIntAr(intAr, strAr, AR_SIZE, INPUT_NAME);

	// Outputs the arrays to console
	OutputArrayToConsole(intAr, strAr, AR_SIZE);
	OutputArrayToFile (intAr, strAr, AR_SIZE, oFile);

	// Initialization of arrays
	InitializeIntStringAr(intAr, strAr, AR_SIZE);

	// TASK #3
	ReadFromUserToStrIntAr(intAr, strAr, AR_SIZE);

	// Outputs the arrays to console
	OutputArrayToConsole(intAr, strAr, AR_SIZE);
	OutputArrayToFile(intAr, strAr, AR_SIZE, oFile);

	// Close output text file
	oFile.close();


	return 0;
}
