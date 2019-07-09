/*************************************************************************
 * AUTHOR		: Debaggis,
 * STUDENT ID	: 389657,
 * Lab #23		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/
#include "Lab24.h"

string InputNames()
{
	string namesArF[10];
	int    countF;

	for (countF = 0; countF < 10; countF ++)
	{
		cout << left << "Enter name #" << countF + 1 << ": ";
		getline(cin, namesArF[countF]);
	}
		return namesArF[9];
}
