/*************************************************************************
 * AUTHOR		: Debaggis, GaryOak
 * STUDENT ID	: 389657, 1008554
 * Lab #23		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/20/2015
 ************************************************************************/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 *	void GetInput (string &n1, int &r1)
 * _______________________________________________________________________
 * This function prompts the user for their name and the number of rounds
 * they want to play.
 * _______________________________________________________________________
 * INPUT:
 * 	name 				: The name of the user
 * 	round				: The number of rounds
 ************************************************************************/
void GetInput (string &n1, int &r1)
{
	cout << left << "Enter Player's Name: ";
	getline(cin, n1);
	cout << "Enter Number of Rounds in Match: ";
	cin >> r1;
	cin.ignore(1000,'\n');

	cout << endl;

}

/*************************************************************************
 * char ValidatePlay()
 * _______________________________________________________________________
 * This function will provide a menu for the user.
 * _______________________________________________________________________
 * INPUT:
 * 		userChoice			: The choice of the user
 ************************************************************************/
char ValidatePlay()
{
	char userChoice;

	cout << "**********************\n** CHOOSE YOUR PLAY **\n"
			"**********************\n";
	//do while error checks the input characters until a valid character
	//is inputed
	do
	{
		cout << "R - Rock\n";
		cout << "P - Paper\n";
		cout << "S - Scissors\n";
		cout << "Enter your play: ";
		cin.get(userChoice);
		userChoice = toupper(userChoice);
		cin.ignore(1000,'\n');

		if(userChoice != 'R'
			&& userChoice != 'S'
			&& userChoice != 'P')
		{
			cout << "\n** INVALID INPUT - Please Enter (R,P,or S) **\n\n";
		}
	}while(userChoice != 'R'
			&& userChoice != 'S'
			&& userChoice != 'P');
	cout << endl;
	return userChoice;
}

/*************************************************************************
 * char GetComputerPlay()
 * _______________________________________________________________________
 * This function will randomly select a choice for the computer.
 * _______________________________________________________________________
 * INPUT:
 * 	NA
 ************************************************************************/
char GetComputerPlay()
{
	char cpuChoice;
	int numCpu;

	numCpu = rand() % 3 + 1;
	switch(numCpu)
	{
		case 1 : cpuChoice = 'R';
				break;
		case 2 : cpuChoice = 'P';
				break;
		case 3 : cpuChoice = 'S';
				break;
	}//end of switch(numCpu)
	return cpuChoice;
}

/*************************************************************************
 * bool CheckWin(char playerChoice, char cpuChoice, string name)
 * _______________________________________________________________________
 * This function will check if the user has won, returns if they won false
 * if the computer won.
 * _______________________________________________________________________
 * INPUT:
 * 		NA
 * 	PROCESSING : returns true or false value back into int main.
 *
 ************************************************************************/
bool CheckWin(char playerChoice, char cpuChoice, string name)
{
	cout << name << " chooses ";
	//switch statement outputs the whole word
	switch(playerChoice)
	{
		case 'R' : cout << "ROCK!\n";
				   break;
		case 'S' : cout << "SCISSORS!\n";
						   break;
		case 'P' : cout << "PAPER!\n";
						   break;
	}
	cout << "Computer chooses ";
	//switch statement outputs the whole word
	switch(cpuChoice)
	{
		case 'R' : cout << "ROCK!\n\n";
				   break;
		case 'S' : cout << "SCISSORS!\n\n";
						   break;
		case 'P' : cout << "PAPER!\n\n";
						   break;
	}

	if(playerChoice == 'R' && cpuChoice == 'S')
	{
		return true;
	}//end of if(playerChoice == 'R' && cpuChoice == 'S')
	else if(playerChoice == 'P' && cpuChoice == 'R')
	{
		return true;
	}//end of else if(playerChoice == 'P' && cpuChoice == 'R')
	else if(playerChoice == 'S' && cpuChoice == 'P')
	{
		return true;
	}//end of else if(playerChoice == 'S' && cpuChoice == 'P')
	else
	{
		return false;
	}//end of else
}

/*************************************************************************
 * void OutputWin(bool currentGameWin, string name)
 * _______________________________________________________________________
 * This function outputs the winner of the round.
 * _______________________________________________________________________
 * INPUT:
 * 		NA
 * OUTPUT:
 * 		outputs the winner of the round
 ************************************************************************/
void OutputWin(bool currentGameWin, string name)
{
	if(currentGameWin == true)
	{
		cout << name << " WINS!!\n\n\n";
	}//end of if statement
	else
	{
		cout << "Computer wins, better luck next time, " << name << "!\n";
		cout << endl << endl;
	}//end of else
}//end of OutputWin

/*************************************************************************
 * void OutputMatchWinner(int numPlayerWins, int numRounds,string userName)
 * _______________________________________________________________________
 * This function outputs the overall winner of the match and the percentage
 * of the wins or losses for the player.
 * _______________________________________________________________________
 * INPUT:
 * OUTPUT:
 * 		perc		: the percentage of wins or losses the user has
 ************************************************************************/
void OutputMatchWinner(int numPlayerWins, int numRounds, string userName)
{
	float perc;

	cout << "***********************************\n********** FINAL RESULTS"
			" *********\n***********************************\n\n";
	perc = (float(numPlayerWins) / numRounds) * 100;
	cout << setprecision(2);

	if(perc > 50)
	{
		cout << userName << " is the WINNER, WINNER, CHICKEN DINNER!!\n";
		cout << userName << " won " << perc << " % of the time!";
	}//end of if statement
	else
	{
		perc = 100 - perc;
		cout << userName << " has LOST!\n";
		cout << userName << " lost " << perc << " % of the time!";
	}//end of else

	cout << endl << endl << endl;
}//end of OutputMatchWinner


#endif
