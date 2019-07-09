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
 * FUNCTION  Calculate the Sales Tax
 *_________________________________________________________
 * Calculates and returns the sales tax that the user will receive
 *_________________________________________________________
 * PRE-CONDITIONS
 * 		countyCodeF: Assignment county code has to be previously defined
 *
 * POST-CONDITIONS
 * 		salesTaxF : Calculated float that will return from the function
 ***********************************************************/
float CalcSalesTax(char countyCodeF) // CALC - The previously designated
{									 //			county code
	float salesTaxF; // The value that will be returned

	// Calculates the sales tax due based on the county location
	if (countyCodeF == 'O')
	{
		salesTaxF = .0775;
	}
	else if (countyCodeF == 'S')
	{
		salesTaxF = .0825;
	}
	else if (countyCodeF == 'L')
	{
		salesTaxF = .08;
	}
	return salesTaxF;
}
