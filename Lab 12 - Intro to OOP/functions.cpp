/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #12        : Intro to OOP
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/13/15
 *************************************************************************/

#include "header.h"

/**************************************************************************
 * MenuPrompt
 * This function prompts user with list menu
 * ------------------------------------------------------------------------
 * RETURNS: prompt as a string
 *************************************************************************/
string MenuPrompt()
{
	return "1 - Initialize Animals\n2 - Change Age\n3 - Change Value\n"
			"4 - Display\n0 - Exit\nEnter selection: ";
}

/**************************************************************************
 * ConvertToEnum
 * This function converts user menu choice to enumerated type
 * ------------------------------------------------------------------------
 * RETURNS: enumerated menu choice
 *************************************************************************/
Menu ConvertToEnum(int input)
{
	switch(input)
	{
	case 1 : return INITIALIZE;
	break;
	case 2 : return AGE_CHANGE;
	break;
	case 3 : return VALUE_CHANGE;
	break;
	case 4 : return DISPLAY;
    break;
	case 0 : return EXIT;
	}
}

/**************************************************************************
 * ValidateInput
 * This function validates an integer input based on min, max parameters;
 * can pass in string prompt or "" for no prompt
 * ------------------------------------------------------------------------
 * RETURNS: valid integer input
 *************************************************************************/
int ValidateInt(string prompt, int min, int max)
{
	int input;		// IN - user inputs number to be validated
	bool invalid;	// PROC - bool variable to determine valid input

	// PROC -  initializing bool variable
	invalid = false;

do{
	// OUT - prompt message
	cout << prompt;

	// PROC & OUT - if user input is other than an integer, user is
	// prompted with error message and invalid becomes true
	if(!(cin >> input))
	{
		cout << "\n*** Please enter a NUMBER between " << min << " and " <<
		max << " ***\n\n";
		cin.clear();
		invalid = true;
	}
	// PROC & OUT - if user input is an out of bounds number, user is
	// prompted with error message and invalid becomes true
	else if(input < min || input > max)
	{
		cout << "\n*** The number " << input << " is an invalid"
				" entry ***\n";
		cout << "*** Please enter a number between " << min << " and " <<
				max << " ***\n\n";
		invalid = true;
	}
	// PROC - if user input is validated, invalid becomes false
	else
	{
		invalid = false;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}while(invalid);

	return input;
}

/**************************************************************************
 * ValidateDouble
 * This function validates a double float input based on min, max
 * parameters; can pass in string prompt
 * ------------------------------------------------------------------------
 * RETURNS: valid double float input
 *************************************************************************/
float ValidateFloat(string prompt, float min, float max)
{
	float input;	// IN - user inputs number to be validated
	bool invalid;	// PROC - bool variable to determine valid input

	// PROC -  initializing bool variable
	invalid = false;

do{
	// OUT - prompt message
	cout << prompt;

	// PROC & OUT - if user input is other than an integer, user is
	// prompted with error message and invalid becomes true
	if(!(cin >> input))
	{
		cout << "\n*** Please enter a NUMBER between " << min << " and " <<
		max << " ***\n\n";
		cin.clear();
		invalid = true;
	}
	// PROC & OUT - if user input is an out of bounds number, user is
	// prompted with error message and invalid becomes true
	else if(input < min || input > max)
	{
		cout << "\n*** The number " << input << " is an invalid"
				" entry ***\n";
		cout << "*** Please enter a number between " << min << " and " <<
				max << " ***\n\n";
		invalid = true;
	}
	// PROC - if user input is validated, invalid becomes false
	else
	{
		invalid = false;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}while(invalid);

	return input;
}


