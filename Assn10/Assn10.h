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
#include <iomanip>
#include <string>
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
 * Function - Heading
 * _______________________________________________________________________
 * This function will output the class heading to an output file.
 ************************************************************************/
void HeadingToFile(
		 ofstream &oFileF,		// IN - output file
		 const char TYPE, 		// IN - type of assignment; 'L' for lab
		 	 	 	 	 	 	// 		'A' for assignment
		 const int NUM,			// IN - number of lab or assignment
		 const string NAME);	// IN - the name of the lab or assin


/*************************************************************************
 *
 * FUNCTION  InitializeIntAr
 *________________________________________________________________________
 * This function initialized an integer array
 ************************************************************************/
void StoreStrIntIntAr(int intBalArF[], 			// IN - integer array
					  int intIdArF[],
					  string stringArF[],
					  const int AR_SIZEF,	// IN - array size
					  const string iFileF);

/*************************************************************************
 *
 * FUNCTION  InitializeStrAr
 *________________________________________________________________________
 * This function initialized a string array
 *************************************************************************/

void InitializeStrAr (string strArF [], 	// IN - string array
					  const int AR_SIZEF);	// IN - array size

/*************************************************************************
 *
 * FUNCTION  InitializeIntAr
 *________________________________________________________________________
 * This function initialized an integer array
 ************************************************************************/
void InitializeIntStringAr
					(int intArF[], 			// IN - integer array
					 string strArF[],		// IN - string array
					 const int AR_SIZEF);	// IN - array size

/*************************************************************************
 *
 * FUNCTION  ReadIntoStringIntAr
 *________________________________________________________________________
 * This function reads in input from a text file to the arrays.
 *************************************************************************/

void ReadIntoStringIntAr (int intArF[],				// IN - integer array
						  string strArF[],			// IN - string array
						  const int AR_SIZEF,		// IN - array size
						  const string INPUT_FILE);	// IN - input text name

/*************************************************************************
 *
 * FUNCTION  ReadFromUserToStrIntAr
 *________________________________________________________________________
 * This function reads inputs from the user in to the arrays.
 ************************************************************************/

void ReadFromUserToStrIntAr(
		int intArF[],				// IN - integer array
		string strArF[],			// IN - string array
		const int AR_SIZEF);			// IN - array size

/*************************************************************************
 *
 * FUNCTION  OutputArrayToConsole
 *________________________________________________________________________
 * This function outputs the arrays to the console.
 ************************************************************************/
void OutputArrayToConsole (const int INT_AR[],	// IN - integer array
						 const string STR_AR[],	// IN - string array
						 const int AR_SIZEF);	// IN - size of array

/*************************************************************************
 *
 * FUNCTION  OutputArrayToFile
 *________________________________________________________________________
 * This function outputs the arrays to a text file
 ************************************************************************/

void OutputArrayToFile (
			  int intArF[],				// IN  - integer array
			  string strArF[],			// IN  - string array
			  const int AR_SIZEF,		// IN  - array size
			  ofstream &oFileF);		// IN - output text file

#endif /* ASSN10_H_ */
