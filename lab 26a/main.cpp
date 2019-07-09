/*************************************************************************
 * AUTHOR		:  Debaggis, Blue Hood
 * STUDENT ID	:  389657, 296932
 * LAB #25		: Array Train - Set #2
 * CLASS		: CS1A
 * SECTION		: MW 10 am
 * DUE DATE		: 5/4/15
 ************************************************************************/

#include "lab26.h"

/*************************************************************************
 * Assignment 25 - Array Train - Set #2
 * _______________________________________________________________________
 * This program will use various methods to insert and extract data
 * to and from parallel arrays.
 * _______________________________________________________________________
 ************************************************************************/

int main()
{
	PrintHeader("Enumerated Types", 'L', 26, 2);

	//CONSTANTS


	//variables
	char season;		//IN & CALC  - the inputed season
	Season seasonN;		//CALC - the season data type variable
	string fruit;		//IN & OUT - recommended fruit based on season
	string seasons;		//CALC & OUT - the name of the season

	//INPUT- this is where we get user input
	season = GetSeason();

	// CALC - Calculates the fruit based on the Season data type
	while(season != 'X')
	{
		// Converts the character to the season data type
		seasonN = ConvertCharToSeason(season);
		switch(seasonN)
		{
			case WINTER : fruit = "Kishu Mini Mandarin";
							break;
			case SPRING : fruit = "Blood Orange";
							break;
			case SUMMER : fruit = "Lane Navel Orange";
							break;
			case FALL   : fruit = "Star Ruby Red Grapefruit";
							break;
		} // End switch
		// Converts the season data type to a string to be outputted
		seasons = SeasonToString(seasonN);
		cout << "\nFor " << seasons << ", you might want to try a ";
		cout << fruit << ".\n\n";

		// INPUT- this is where we get user input
		season = GetSeason();
	} // End while

	return 0;
}


