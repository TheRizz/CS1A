/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #12        : Intro to OOP
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/13/15
 *************************************************************************/

#include "header.h"

/****************
** CONSTRUCTOR **
*****************/
Animal::Animal()
{
	type.clear();
	name.clear();
	age = 0;
	value = 0;
}

/******************
** DECONSTRUCTOR **
******************/
Animal::~Animal()
{
}

/**************
*** MUTATORS **
**************/
/**************************************************************************
 * void Initialize (string animalType, string animalName, int animalAge,
 * float animalValue);
 *
 * Mutator; This method will initialize all attributes based on
 * parameters variable values.
 *-------------------------------------------------------------------------
 * Parameter: type (string) // IN - the animal type to be initialized to
 * 			  name (string) // IN – the name to be initialized
 * 			  age (integer) // IN – the age to be initialized
 * 			  value (float) // IN - the price value to be initialized
 *-------------------------------------------------------------------------
 * Return: none - initializes class variables
 *************************************************************************/
void Animal::Initialize(string animalType, string animalName, int animalAge,
		float animalValue)
{
	type = animalType;
	name = animalName;
	age = animalAge;
	value = animalValue;
}

/**************************************************************************
 * void ChangeAge (int age);
 *
 * Mutator; This method will update the age attribute to the
 * parameter age value
 *-------------------------------------------------------------------------
 * Parameter: age (integer) // IN – the age for the new attribute
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
void Animal::ChangeAge(int animalAge)
{
	age = animalAge;
	cout << "\nChanging " << name << "\'s age to " << animalAge;
	cout << "...\n\n";
}

/**************************************************************************
 * void ChangeValue (float value);
 *
 * Mutator; This method will update the price value attribute to the
 * parameter value.
 *-------------------------------------------------------------------------
 * Parameter: value (float) // IN – the price value for the new attribute
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
void Animal::ChangeValue(float animalValue)
{
	value = animalValue;
	cout << "\nChanging " << name << "\'s value to " << setprecision(2) <<
			fixed << animalValue;
	cout << "...\n\n";
}

/***************
*** ACCESSORS **
***************/
/**************************************************************************
 * void DisplayData ();
 *
 * Accessor; This method will output the data of the Animal class object
 * in proper format
 *-------------------------------------------------------------------------
 * Parameters: none
 *-------------------------------------------------------------------------
 * Return: none - outputs Animal class data in proper format
 *************************************************************************/
void Animal::DisplayData() const
{
	cout << left << setw(10)  << type << setw(18) << name;
	cout << age << setw(12) << right << setprecision(2) << fixed <<
			value << endl;
}





