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
 * FUNCTION  Calculate Discount
 *_________________________________________________________
 * Calculates the discount that the user will receive
 *_________________________________________________________
 * PRE-CONDITIONS
 * 		monthF: Assignment month has to be previously defined
 *
 * POST-CONDITIONS
 * 		saleF : Calculated float that will return from the function
 ***********************************************************/
float CalcDiscount(int monthF) // CALC - The previously designated month
{
	float saleF; // The value that will be returned from the function

	// Take the month and calculate what the discount should be
	if (monthF <= 5 && monthF >0)
	{
		saleF = .05;
	}
	else if (monthF >=6  && monthF <=8)
	{
		saleF = .1;
	}
	else if (monthF >=9 && monthF <=12)
	{
		saleF = .15;
	}
	return saleF;
}
