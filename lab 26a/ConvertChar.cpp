/*************************************************************************
 * AUTHOR		:  Debaggis, Blue Hood
 * STUDENT ID	:  389657, 296932
 * LAB #25		: Array Train - Set #2
 * CLASS		: CS1A
 * SECTION		: MW 10 am
 * DUE DATE		: 5/4/15
 ************************************************************************/

#include "lab26.h"

/*********************************************************************
 * ConvertChar
 * ___________________________________________________________________
 * This function convert a character to a enumerated data type
 *
 * ___________________________________________________________________
 * PRE-CONDITIONS:
 * The paramater for a previously entered character must have been
 * entered in to the program already
 * ___________________________________________________________________
 * POST-CONDITIONS:
 * Returns the enumerated data type variable to be used for calculation
 * in the int main
 *
 *********************************************************************/
Season ConvertCharToSeason(char seasonF	//IN & OUT - the char for season
				 		  )
{
	Season seasonNF; // The enumerated data type variable
	// This converts the char to the enumerated data type variable
	switch(seasonF)
	{
	case 'W' : seasonNF = WINTER;
	break;
	case 'S' : seasonNF = SPRING;
	break;
	case 'U' : seasonNF = SUMMER;
	break;
	case 'F' : seasonNF = FALL;
	break;
	} // End switch
	return seasonNF; // Returns the data to the int main
}
