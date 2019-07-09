/*************************************************************************
 * AUTHOR		: Debaggis, GaryOak
 * STUDENT ID	: 389657, 1008554
 * Lab #23		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/20/2015
 ************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;


void ClassHeading(); 						// OUT- The class heading

void GetInput(string &n1, 					// IN - The user's name
			  int &r1);   					// IN - The number of rounds to
											//      be played
char ValidatePlay();

char GetComputerPlay();

bool CheckWin(char playerChoice, 			// IN - The user's choice
			  char cpuChoice, 				// PRO- The computer's
			  	  	  	  	  	  	  	  	//		generated choice
			  string name);					// P&O- The name of the user

void OutputWin(bool currentGameWin, 		// OUT- The winner of the game
			   string name);				// P&O- The name of the user


void OutputMatchWinner(int numPlayerWins, 	// P&O- The num of wins by user
					   int roundsGame,		// P&O- The number of rounds
					   string userName);	// P&O- The name of the user

#endif
