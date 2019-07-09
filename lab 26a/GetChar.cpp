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
 * GetSeason
 * ___________________________________________________________________
 * This function will get the user inputed character for the season
 *
 * ___________________________________________________________________
 * PRE-CONDITIONS:
 * <None>
 * ___________________________________________________________________
 * POST-CONDITIONS:
 * Returns the character that is stored in seasonF back to the int main.
 *
 *********************************************************************/
char GetSeason ()
{
	char seasonF; // The character that will be returned to the int main

	// This will error check until the user has entered a proper varaible
	do
	{
		cout << "********************\n";
		cout << "   FRUIT SELECTOR\n";
		cout << "********************\n";
		cout << "(W) Winter\n";
		cout << "(S) Spring\n";
		cout << "(U) Summer\n";
		cout << "(F) Fall\n";
		cout << "(X) Exit\n";
		cout << "What season is it? ";
		cin.get(seasonF);
		cin.ignore(1000,'\n');
		seasonF = toupper(seasonF);
		if(seasonF != 'W' &&
		   seasonF != 'S' &&
		   seasonF != 'U' &&
		   seasonF != 'F' &&
		   seasonF != 'X')
		{
			cout << "\n*** INVALID INPUT - Please input a W, S,"
					" U, F or X ***\n\n";
		}// End if
	}while(seasonF != 'W' &&
		   seasonF != 'S' &&
		   seasonF != 'U' &&
		   seasonF != 'F' &&
		   seasonF != 'X');
	return seasonF; // Returns the character back to int main
}
