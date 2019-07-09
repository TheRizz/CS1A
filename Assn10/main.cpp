/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn #10		: Parallel Array
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 05/06/2015
 ************************************************************************/

#include "Assn10.h"

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
	const int 	 FUCK		 = 40;

	//Variables
	string nameAr[AR_SIZE];			// IN & CALC - integer array
	int idAr[AR_SIZE];		// IN & CALC - string array
	int balAr[AR_SIZE];
	ofstream oFile;
	string inFileName;
	string outFileName;
	string search;

	// Open output text file
	oFile.open(OUTPUT_NAME.c_str());

	// OUTPUTS class header
	ClassHeader('L', 10, "Parallel Arrays");
	HeadingToFile(oFile, 'L', 10, "Parallel Arrays");

	cout << setw(FUCK) << "What input file would you like to use?";
	getline(cin, inFileName);
	cout << setw(FUCK) << "What output file would you like to use?";
	getline(cin, outFileName);

	cout << "Who do you want to search for (enter done to exit): ";
	getline(cin, search);

	while(search != "done")
	{



		cout << "Who do you want to search for (enter done to exit): ";
		getline(cin, search);
	}


	return 0;
}
