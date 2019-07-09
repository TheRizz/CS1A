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
 * ASSN # 10 - PARALLEL ARRAYS
 * _______________________________________________________________________
 * This program will first receive as an input the names of an input and
 * output file. It will then read in a list of names, id #s, and balances
 * from an input file. The program will then prompt the user for a name to
 * search for, when it finds the name it will output to a file the person's
 * id *, name, and balance. Then at the end it will calculate the average
 * of the balances and output that below the list.
 * _______________________________________________________________________
 * _______________________________________________________________________
 ************************************************************************/

int main()
{
	// CONSTANTS
	/*********************************************************************
	 * INPUT_ALIGN 		  = 51;	- For the input spacing
	 * OUTPUT_ALIGN 	  = 9;	- For output spacing
	 * OUTPUT_ALIGN_TWO   = 25;	- For output spacing
	 * OUTPUT_BALANCE	  = 35;	- For balance alignment
	 * OUTPUT_AVERAGE 	  = 10;	- For average alignment
	 * OUTFILE_ALIGN 	  = 40;	- For aligning the outfile
	 * ARRAY_SIZE 		  = 10;	- For the size of the array
	 * *******************************************************************/
	const int INPUT_ALIGN 		  = 51;
	const int OUTPUT_ALIGN 		  = 9;
	const int OUTPUT_ALIGN_TWO    = 25;
	const int OUTPUT_BALANCE	  = 35;
	const int OUTPUT_AVERAGE 	  = 10;
	const int OUTFILE_ALIGN 	  = 40;
	const int ARRAY_SIZE 		  = 10;
/*************************************************************************/
	// VARIABLE LIST
	string nameAr[ARRAY_SIZE];		// ARRAY OF NAMES
	int intIdAr[ARRAY_SIZE];		// ARRAY OF ID #s
	float intBalAr[ARRAY_SIZE];		// ARRAY OF BALANCES
	int countF;						// CALC - New value of index
	int count;						// CALC - Used in avg calculation
	float balance;					// CALC - Accumulates balances
	float averageBalance;			// CALC - Calculates avg of balances
	string name;					// IN   - Gets name to look for
	string inFileName;				// IN 	- Name of input file
	string outFileName;				// IN 	- Name of output file
	ofstream outFile;				// VARIABLE FOR OUTPUT FILE

	// INITIALIZE VARIABLES
	balance 		  = 0;					// Initializes to zero
	averageBalance    = 0;					// Initializes to zero
	count 			  = 0;					// Initializes to zero

	// OUTPUTS THE CLASS HEADER TO THE CONSOLE
	 ClassHeader('A', 10, "Parallel Arrays");

	// NAME OF INPUT FILE AND OUTPUT FILE
	cout << left;
	cout << setw(OUTFILE_ALIGN) << "What input file "
									"would you like to use?";
	getline(cin, inFileName);

	cout << setw(OUTFILE_ALIGN) << "What output file "
									"would you like to use?";
	getline(cin, outFileName);
	cout << right;
	cout << endl;

	// OPENS OUTPUT FILE
	outFile.open(outFileName.c_str());

	// PrintHeaderToFile - will output a header for this assignment.
	// Output PrintHeader to file - ostream
	PrintHeaderOstream(outFile, "Parallel Arrays", 'A', "10");

	// ReadInput - will read input from input file
	ReadInput (nameAr,
			   intIdAr,
			   intBalAr,
			   ARRAY_SIZE,
			   inFileName);

	// OUTPUTS TABLE IN OUTPUT FILE
	outFile << left;
	outFile << setw(OUTPUT_ALIGN)        << "ID #"
			<< setw(OUTPUT_ALIGN_TWO) << "NAME"
										 << "BALANCE DUE";
	outFile << setw(OUTPUT_ALIGN)        << "\n----"
			<< setw(OUTPUT_ALIGN_TWO) << " --------------------"
		                                 << " -----------\n";

	// PROMPT USER FOR A NAME
	cout << left;
	cout << setw(INPUT_ALIGN)
	     << "Who do you want to search for(enter done to exit)?";
	getline(cin, name);

	while (name!= "done")
	{
		// Search - will search if the given user input name is in the input
		//			file.
		Search (nameAr,
			    ARRAY_SIZE,
			    countF,
			    name,
				count,
				inFileName);


		// This will calculate the balance due, average the balance due
		// 	Output found if found, and output to the output file
		if (name == nameAr[countF])
		{

			balance += intBalAr[countF];
			averageBalance = balance / count;

			cout << "Found.\n\n";


			// OutputResults - will output name, id, balance in output file
			OutputResults (outFile,
						   nameAr,
						   intIdAr,
						   intBalAr,
						   countF);

		} // END if
		else
		{
			cout << name << " was not found\n\n";

		} // END else

		cout << setw(INPUT_ALIGN)
			 << "Who do you want to search for(enter done to exit)?";
		getline(cin,name);

	} // END while

	// OUTPUT AVERAGE BALANCE DUE IN OUTPUT FILE
	outFile << right;
	outFile << endl << endl;
	outFile << setw(OUTPUT_BALANCE) << "Average Balance Due: $";
	outFile << setw(OUTPUT_AVERAGE) << setprecision(2)
								    << fixed
									<< averageBalance;

	// CLOSES OUTPUT FILE
	outFile.close();

	// OUTPUT THANK YOU MESSAGE AT THE END OF THE PROGRAM
	cout << "\n\nThank you for using my program.";


	return 0;
}
