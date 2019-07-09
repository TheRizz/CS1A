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
 * SeasonToString
 * ___________________________________________________________________
 * This function will convert the Season data type variable to a string
 * to be used in the output of this function
 *
 * ___________________________________________________________________
 * PRE-CONDITIONS:
 * The season data type variable must have been previously inputed
 * ___________________________________________________________________
 * POST-CONDITIONS:
 * Returns the string that is stored in seasonNF back to the int main.
 *
 *********************************************************************/
string SeasonToString(Season seasonNF	//IN & OUT - the season data type
			   )
{
	string seasonsF; // The string that will be returned to the int main
	// This will convert the Season data type to a string
	switch(seasonNF)
		{
			case WINTER : seasonsF = "winter";
							break;
			case SPRING : seasonsF = "spring";
							break;
			case SUMMER : seasonsF = "summer";
							break;
			case FALL   : seasonsF = "fall";
							break;
		} // End switch
	return seasonsF; // This will be returned to int main
}
