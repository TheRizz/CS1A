/*************************************************************************
 * AUTHOR		: Debaggis, gf857
 * STUDENT ID	: 389657, 383052
 * LAB #26		: Fixing Code
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 05/13/2015
 ************************************************************************/
#include "Lab26.h"

void CheckWhiteSpace (string &wordF, int &countF)
{
	int index;
	int letterCount;
	string newWordF;

	letterCount=0;


	for(index = 0; index <= countF; index++)
	{
		if(isalpha(wordF[index]))
		{
			newWordF[index] = wordF[index];
		}
		else
		{
			index++;
			newWordF[index] = wordF[index];
			letterCount ++;

		}

	}
	countF-=letterCount;

	wordF=newWordF;
	wordF= tolower (wordF);


	newWord



}
