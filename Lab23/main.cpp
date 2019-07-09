/*************************************************************************
 * AUTHOR		: Debaggis, GaryOak
 * STUDENT ID	: 389657, 1008554
 * Lab #23		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/20/2015
 ************************************************************************/
#include "MyHeader.h"
#include "functions.h"
#include "HeaderFunction.h"

/*************************************************************************
 * Functions
 * _______________________________________________________________________
 * This program allows the player to play rock paper scissors. In this
 * version if there is a tie the computer wins. The user must beat the
 * computer to win a round.
 * _______________________________________________________________________
 * INPUT:
 * 		name			: The name of the user
 *
 * 		round			: The number of rounds the user wants to play
 *
 * 		userChoice		: The choice the user makes
 *
 * OUTPUT:
 * 		boolWinner		: The winner of the contest
 *
 * 		perc			: The win percentage at the end of the match
 ************************************************************************/

int main()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	  : Programmer's Name
	 * CLASS		  : Student's Course
	 * SECTION		  : Class Days and Times
	 * LAB_NUM		  : Lab Number (specific to this lab)
	 * LAB_NAME		  : Title of the Lab

	 ********************************************************************/

	/*********************************************************************/
	//Variables

	string  name; 			// INPUT & OUT	 - The user's name
	int   rounds;	 		// INPUT & CALC	 - The number of rounds that
							//				   the user wishes to play
	char  userChoice; 		// INPUT & CALC	 - The choice that the user
							//				   decides on
	char  cpuChoice; 		// INPUT & CALC  - The choice that the computer
							//				   generates
	bool  boolWinner;		// CALC & OUT    - The winner of the round
	int   count;			// CALC          - Counts the number of times
							//					the loop will repeat
	int	  totalWin; 		// CALC & OUTPUT - An accumulator of the total
							//				   	wins
	/*********************************************************************/
	srand(1337);
	totalWin = 0; //Initializes totalWin to 0

	//outputs the class heading and the author box
	ClassHeading();

	//prompts the user for their name and the number of rounds they want
	//to play
	GetInput(name, rounds);

	for(count = 1; count <= rounds; count++)
	{
		//gets the users choice
		userChoice = ValidatePlay();

		//gets the computers choice
		cpuChoice = GetComputerPlay();

		//checks to see who won the round
		boolWinner = CheckWin(userChoice, cpuChoice, name);

		//outputs the winner of the round
		OutputWin(boolWinner, name);

		if(boolWinner)
		{
			totalWin++; // increments the wins of the user
		}
	}//end of for(count = 1; count <= rounds; count++)

	//outputs the winner of the match and the percentage won/lost by user
	OutputMatchWinner(totalWin, rounds, name);

	return 0;
}


