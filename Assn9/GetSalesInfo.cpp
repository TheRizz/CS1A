/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn# 9		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/
#include "Assn9.h"
/**********************************************************
 *
 * FUNCTION  Get the Sales Information
 *_________________________________________________________
 * Takes in the user's sale information
 *_________________________________________________________
 * PRE-CONDITIONS
 *		This function will read in the user's sale information
 * POST-CONDITIONS
 * 		This function will take the user's input information
 * 			and pass the data by reference so that it will be usable
 * 			throughout the whole program
 ***********************************************************/
void GetSalesInfo (int    &accNumF,		// IN - The account number
				   int    &monthF,	 	// IN - The month
				   int    &dayF,		// IN - The day
				   int    &yearF,		// IN - The year
				   char   &countyCodeF,	// IN - The county code
				   float  &totalF,		// IN - The total
				   int    &weightF)		// IN - The weight
{
	cout << left << "Please Enter your Account Number: ";
	cin  >> accNumF;
	cout << "Please Enter the Sales Date.\n";
	cout << "Enter the Month: ";
	cin  >> monthF;
	cout << "Enter the Day: ";
	cin  >> dayF;
	cout << "Enter the Year: ";
	cin  >> yearF;
	cin.ignore(1000,'\n');
	cout << "Please Enter the County Code: ";
	cin.get(countyCodeF);
	cin.ignore(1000,'\n');
	countyCodeF = toupper(countyCodeF);
	cout << "Please Enter the Sales Amount: ";
	cin  >> totalF;
	cout << "Please Enter the Weight: ";
	cin  >> weightF;
	cout << endl;
}
