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
 * FUNCTION Search
 * _______________________________________________________________________
 * This function searches for the name and returns proper index to the
 * calling function.
 *
 * RETURNS -> countF
 * _______________________________________________________________________
 * PRE_CONDITIONS
 * 		nameAr[index]	: compares given value (name) by user to value from
 * 							  input file.
 * 		ARRAY_SIZE			: used in for loop
 * 		name 				: gets value from user in int main
 * 							   - also used for comparison
 * POST_CONDITIONS
 *		countF			: if name is found, current nameAr[index]
 *							  will get stored as countF
 *		count				: counter - used for determining average balance
 *
 *************************************************************************/

int Search (string nameAr[],	// IN   - used for comparing
			const int ARRAY_SIZE,	// IN   - used in for loop
			int&countF,			// OUT  - gets the value of index
			string name,			// IN   - gets input name from int main
			int&count,				// CALC - used for determining avg. bal
			string&inFileName)

{
	ifstream inFile;

	// OPENS INPUT FILE
	inFile.open(inFileName.c_str());

	int index;

	for (index = 0; index < ARRAY_SIZE; index++)
	{


		if (name == nameAr[index])
		{
			countF = index;
			count++;
		} // END IF STATEMENT


	} // END FOR LOOP

	// CLOSES INPUT FILE
	inFile.close();


	return countF;

}
