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
 * FUNCTION  Calculate Shipping
 *_________________________________________________________
 * Calculates and returns the shipping price
 *_________________________________________________________
 * PRE-CONDITIONS
 *		weightF: Assignment weight has to be previously defined
 * POST-CONDITIONS
 * 		salesTaxF : Calculated float that will return from the function
 ***********************************************************/
float CalcShipping(int weightF)	// CALC - The previously designated weight
{
	float shippingF; // The value that is going to be returned

	// Calculates the shipping based on the weight
	if (weightF <= 25)
	{
		shippingF = 5.00;
	}
	else if (weightF >= 26 && weightF <= 50)
	{
		shippingF = 5.00 + ((weightF - 25) * .10);
	}
	else if (weightF > 50)
	{
		shippingF = 5.00 + ((weightF - 50) * .07);;
	}
	return shippingF;
}
