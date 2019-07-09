/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #12        : Intro to OOP
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/13/15
 *************************************************************************/

#include "header.h"

int main()
{
	Animal fluffy;		// IN & OUT - Animal class object "Fluffy"
	Animal maa;			// IN & OUT - Animal class object "Maa"
	Animal babe;		// IN & OUT - Animal class object "Babe"

	Menu choice;		// IN - user's menu choice
	char charChoice;	// IN - user's choice for re-initialize
	int numChoice;		// IN - user's choice for animal to modify
	bool initialize;	// PROC - bool to determine if already initialized
	bool invalid;		// PROC - bool for error checking char input

	// PROC - initialize bool to false
	initialize = false;

	// OUT - header
    PrintHeader(cout, "Intro to OOP", 'L', 12);

	// IN & PROC - user input for first run-through (initialize or exit)
	choice = ConvertToEnum(ValidateInt("1 - Initialize Animals\n0 - Exit"
			"\nEnter selection: ", 0, 1));

	cout << endl;

	// PROC - if user's choice is not EXIT, loop is entered
	while(choice != EXIT)
	{

		// PROC - choice is INITIALIZE
		if(choice == INITIALIZE)
		{
			// PROC - if initialize has already occurred, user is prompted
			// to re-initialize or not
			if(initialize == true)
			{
			do{
				cout << "\nAre you sure you want to reinitialize (Y/N)? ";
				cin.get(charChoice);
				charChoice = toupper(charChoice);
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				// PROC & OUT - error checking for proper char entry
				if(charChoice != 'Y' && charChoice !=
						'N')
				{
					cout << "*** " << charChoice << " is an invalid entry"
							" ***\n";
					cout << "*** Please enter Y or N ***\n";
					invalid = true;
				}
				// PROC - if valid, loop exits
				else
				{
					invalid = false;
				}
			}while(invalid);
			}

			// PROC & OUT - if animals have not been initialized or user's
			// chooses yes to re-initialize, msg is output and animals
			// are re-initialized
			if(charChoice == 'Y' || !initialize)
			{
				cout << "Initializing Fluffy, Maa, & Babe...\n\n";
				fluffy.Initialize("Sheep", "Fluffy", 1, 15000.00);
				maa.Initialize("Sheep", "Maa", 3, 16520.35);
				babe.Initialize("Pig", "Babe", 2, 10240.67);
				initialize = true;
			}
			// PROC & OUT - else if user chooses not to re-initialize
			// and initialize has already occurred, msg is output
			else if(charChoice == 'N' && initialize)
			{
				cout << "Animals have not been re-initialized!\n\n";
			}

		}
		// PROC & OUT - if user choice is AGE_CHANGE or VALUE_CHANGE,
		// appropriate header msg is ouput
		else if(choice == AGE_CHANGE || choice == VALUE_CHANGE)
		{
			if(choice == AGE_CHANGE)
			{
				cout << "\nCHANGE AGE:\n";
			}
			else
			{
				cout << "\nCHANGE VALUE:\n";
			}

			// IN & PROC - error checking user input for which animal to
			// change
			numChoice = ValidateInt("1 - Fluffy\n2 - Maa\n3 - Babe\nSelect the"
							" animal you'd like to change: ", 1, 3);
			cout << endl;

			// IN & OUT - if choice is AGE_CHANGE, user input is error
			// checked for valid age parameters and method is called
			if(choice == AGE_CHANGE)
			{
				switch(numChoice)
				{
				case 1 : fluffy.ChangeAge(ValidateInt("NEW AGE: ", 0,
						10));
				break;
				case 2 : maa.ChangeAge(ValidateInt("NEW AGE: ", 0,
						10));
				break;
				case 3 : babe.ChangeAge(ValidateInt("NEW AGE: ", 0,
						10));
				break;
				}
			}
			// IN & OUT - else, choice is = to VALUE_CHANGE input is error
			// checked and method is called for change value
			else
			{
				switch(numChoice)
				{
				case 1 : fluffy.ChangeValue(ValidateFloat("NEW VALUE: ",
						0, 400000));
				break;
				case 2 : maa.ChangeValue(ValidateFloat("NEW VALUE: ",
						0, 400000));
				break;
				case 3 : babe.ChangeValue(ValidateFloat("NEW VALUE: ",
						0, 400000));
				break;
				}
			}
		}
		// OUT - if user choice is DISPLAY, display method is called
		else
		{
		cout << setw(11) << left << "\nANIMAL";
		cout << setw(16) << "NAME" << setw(7) << "AGE" << "VALUE\n";
		cout << "--------- --------------- --- -----------\n";
		fluffy.DisplayData();
		maa.DisplayData();
		babe.DisplayData();
		cout << endl;
		}

		// IN & PROC - while loop re-initialized with full menu prompt
		choice = ConvertToEnum(ValidateInt(MenuPrompt(), 0, 4));
	}

	cout << "\nThank you for using my program!";
}


