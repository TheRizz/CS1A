/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #12        : Intro to OOP
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/13/15
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

// preprocessors directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <ios>
using namespace std;

// enumerated types of menu options
enum Menu
{
	INITIALIZE,
	AGE_CHANGE,
	VALUE_CHANGE,
	DISPLAY,
	EXIT
};

class Animal
{
public:
   /****************
   ** CONSTRUCTOR **
   *****************/
   /***********************************************************************
   * Sheep ();
   * Constructor; Initialize class attributes
   * Parameters: none
   * Return: none
   ***********************************************************************/
	Animal();	// constructor
	~Animal();  // de-constructor

	/**************
	*** MUTATORS **
	**************/
	/**********************************************************************
	* Method Initialize: Class Animal
	* ---------------------------------------------------------------------
	* This method initializes values for an Animal class object.
	* ---------------------------------------------------------------------
	* PRE-CONDITIONS
	* 	animalType : Animal type has to be previously defined
	* 	animalName : Animal name has to be previously defined
	* 	animalAge  : Animal age has to be previously defined
	* 	animalValue: Animal value has to be previously defined
	*
	* POST-CONDITIONS
	* 	This function will initializes all variables for an Animal class
	* 	object.
	**********************************************************************/
	void Initialize(string animalType, // IN - type to be initialized to
			string animalName, 		   // IN - name to be initialized to
			int animalAge,			   // IN - age to be initialized to
			float value);			   // IN - value to be initialized to

	/**********************************************************************
	* Method ChangeAge: Class Animal
	* ---------------------------------------------------------------------
	* This method changes the age of a Animal class object
	* ---------------------------------------------------------------------
	* PRE-CONDITIONS
	* 	animalAge : Animal age has to be previously defined
	*
	* POST-CONDITIONS
	* 	This function will change the age of a Animal class object.
	**********************************************************************/
	void ChangeAge(int animalAge); // IN – the age for the new attribute

	/**********************************************************************
	* Method ChangeValue: Class Animal
	* ---------------------------------------------------------------------
	* This method changes the price value of a class Animal object
	* ---------------------------------------------------------------------
	* PRE-CONDITIONS
	* 	animalValue: Animal value has to be previously defined
	*
	* POST-CONDITIONS
	* 	This function will change the price value of a Animal class object.
	**********************************************************************/
	void ChangeValue(float animalValue); // IN – the price value for the
										 // new attribute

	/***************
	*** ACCESSORS **
	***************/
	/**********************************************************************
	* Method DisplayData: Class Animal
	* ---------------------------------------------------------------------
	* This method displays all information from the class in proper format.
	* ---------------------------------------------------------------------
	* PRE-CONDITIONS
	* 	none
	*
	* POST-CONDITIONS
	* 	Outputs properly formatted data from Animal class object.
	**********************************************************************/
	void DisplayData() const;

private:
	string type;	// IN & OUT - the animal's type
	string name;	// IN & OUT - the animal's name
	int age;		// IN & OUT - the animal's age
	float value;	// IN & OUT - the animal's price value
};

/*************************************************************************
* PrintHeader
* This function receives an assignment name, type
* and number then outputs the appropriate header.
* ------------------------------------------------------------------------
* PRE-CONDITIONS
* 	asName: Assignment Name has to be previously defined
* 	asType: Assignment Type has to be previously defined
* 	asNum : Assignment Number has to be previously defined
*
* POST-CONDITIONS
* 	This function will output the class header
**************************************************************************/
void PrintHeader(ostream &output, // OUT - stream output
		string asName, 			  // OUT - assignment name
		char asType, 			  // OUT - assignment type
		int asNum);				  // OUT - assignment #

/*************************************************************************
* MenuPrompt
* This function returns the menu prompt as a string to be re-used with
* more versatility (i.e. in ValidateInput function)
* ------------------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	This function will return the menu prompt as a string
**************************************************************************/
string MenuPrompt();

/*************************************************************************
* ConvertToEnum
* This function converts from integer to appropriate enum type
* ------------------------------------------------------------------------
* PRE-CONDITIONS
* 	input : user input choice from menu
*
* POST-CONDITIONS
* 	This function will return the appropriate enum of type Menu based on
* 	user input
**************************************************************************/
Menu ConvertToEnum(int input);

/*************************************************************************
* ValidateInt
* This function validates an integer input based on min, max parameters;
* can pass in string prompt or "" for no prompt
* ------------------------------------------------------------------------
* PRE-CONDITIONS
* 	prompt : prompt for user input (as a string), can be "" for no prompt
* 	min	   : minimum number allowed
* 	max    : maximum number allowed
*
* POST-CONDITIONS
* 	This function will return a valid integer based on parameters
**************************************************************************/
int ValidateInt(string prompt, int min, int max);

/*************************************************************************
* ValidateFloat
* This function validates an float input based on min, max parameters;
* can pass in string prompt or "" for no prompt
* ------------------------------------------------------------------------
* PRE-CONDITIONS
* 	prompt : prompt for user input (as a string), can be "" for no prompt
* 	min	   : minimum number allowed
* 	max    : maximum number allowed
*
* POST-CONDITIONS
* 	This function will return a valid float based on parameters
**************************************************************************/
float ValidateFloat(string prompt, float min, float max);

#endif /* HEADER_H_ */
