/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn #10		: Parallel Array
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 05/06/2015
 ************************************************************************/

#ifndef ASSN10_H_
#define ASSN10_H_

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

/*************************************************************************
* ClassHeader
* ________________________________________________________________________
* This function outputs an assignment name, type
* and number then outputs the appropriate header
* - returns nothing > This will output the class heading.
*************************************************************************/
void ClassHeader(
			 const char TYPE, 	// IN - type of assignment; 'L' for lab
			 	 	 	 	 	// 		'A' for assignment
			 const int NUM,		// IN - number of lab or assignment
			 const string NAME);// IN - the name of the lab or assn

/*************************************************************************
 * PrintHeaderOstream
 * ________________________________________________________________________
 * 		This function receives an assignment name, type and number
 * 		then outputs the appropriate header - using ostream.
 *************************************************************************/
 void PrintHeaderOstream (
		 ostream&oFile, 	  // OUT - This is file location where the info
		 	 	 	 		  //       	will be output to
		 const string asName, // IN  - The assignment or lab name
	     const char asType,	  // IN  - The assignment or lab type
	     const string asNum); // IN  - The assignment or lab number

/*************************************************************************
 * ReadInput
 * ________________________________________________________________________
 * 		This function reads in data from input file "InFile.txt"
 *************************************************************************/
void ReadInput (
		string nameAr[], // IN   - The name of the array for names
		int intIdAr[],		 // IN   - The name of the array for id's
		float intBalAr[],	 // IN 	 - The name of the array for balances
		const int ARRAY_SIZE,// CALC - The constant for array size
		string&inFileName);  // IN   - The inFile name to be used to
							 // 		transfer the data in to the arrays

/*************************************************************************
 * Search
 * ________________________________________________________________________
 * 		This function will search for the name and return the proper
 * 		index value to the calling function.
 *************************************************************************/
int Search (string nameAr[],   // IN   - The name of the array for names
			const int ARRAY_SIZE,// CALC - The constant for array size
			int&countF,		   //	CALC - Finds the user location
			string name,	   // CALC - The name to be looked for
			int&count,		   // CALC - The counter to go through the loop
			string&inFileName);// CALC - The input file name

/*************************************************************************
 * OutputResults
 * ________________________________________________________________________
 * 		This function reads in data from input file "InFile.txt"
 *************************************************************************/
void OutputResults (ostream &oFile,   // CALC - The ofile location
					string nameAr[],  // The name array
					int intIdAr[],    // The id array
					float intBalAr[], // CALC - The balance array
					int countF);      // The count for the loop

#endif /* ASSN10_H_ */
