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
 * FUNCTION OutputResults
 * _______________________________________________________________________
 * This function outputs the results.
 * _______________________________________________________________________
 * PRE_CONDITIONS
 *
 * POST_CONDITIONS
 * 		intIdAr  [index]	:	outputs id of given user input
 * 		nameAr[index]		:	outputs name of given user input
 * 		intBalAr [index]	:	outputs balance of given user input
 *
 *************************************************************************/

void OutputResults (ostream &oFile,
					string nameAr[],  	  // OUT  - outputs nameAr[countF]
					int intIdAr[],		  // OUT  - outputs intIdAr[countF]
					float intBalAr[],	  // OUT  -	outputs intBalAr[countF]
					int countF)		      // CALC - gets value
										  //        from function Search

{
	const int ID_SPACE 		= 9;
	const int NAME_SPACE 	= 25;
	const int BAL_SPACE 	= 10;
	const int NUM_PRECISION = 2;

	oFile << left;
	oFile << setw(ID_SPACE)
		  << intIdAr[countF]
		  << setw(NAME_SPACE)
		  << nameAr[countF];

	oFile << "$";

	oFile << right;
	oFile << setw(BAL_SPACE) << setprecision(NUM_PRECISION) << fixed
		  << intBalAr[countF];

	oFile << endl;
}
