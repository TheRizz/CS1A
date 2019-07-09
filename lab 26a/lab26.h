/*************************************************************************
 * AUTHOR		:  Debaggis, Blue Hood
 * STUDENT ID	:  389657, 296932
 * CLASS ASSIN	:  Lab 25b
 * CLASS		:  CS1A
 * SECTION		:  MW : 10am
 * DUE DATE		:  05/4/15
 *************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

enum Season // This is the data type we use for the seasons
{
	WINTER,
	SPRING,
	SUMMER,
	FALL
};
//PROTOTYPES

//this function outputs the header
void PrintHeader (string asName, 	//IN & OUT - assignment name
				 char asType, 		//IN & CALC - assignment type
				 int asNum, 		//IN & OUT - assignment number
				 int numstudents	//IN & CALC - num students
				 );

//this function will get the current season
char GetSeason ();

//this function will convert the character to a season data type
Season ConvertCharToSeason(char seasonF	//IN & OUT - the char for season
							);

//this function will convert the season data type to a string
string SeasonToString(Season seasonNF	//IN & OUT - the season data type
			   );
