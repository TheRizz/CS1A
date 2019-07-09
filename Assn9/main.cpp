/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn# 9		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/
#include "Assn9.h"

/*************************************************************************
 * Functions
 * _______________________________________________________________________
 * This program reads in the user's information including: account number,
 * the date, the county code, the total, and the weight. The it calculates
 * the discount, sales tax, and shipping prices that will alter the
 * total price and produce a new total price that has been affected by
 * these numbers. Then the total price will be output.
 * _______________________________________________________________________
 * INPUT:
 * 	  accNum			: The account number
 *	  month 			: The month
 *	  day				: The day
 *	  year				: The year
 *	  countyCode		: The county code
 *	  total 			: The initial total input
 *	  weight			: The weight
 *
 * OUTPUT:
 * 	  discount			: The discount from the total price
 * 	  salesTax			: The sales tax to be added on to the total price
 * 	  shipping			: The shipping to be added on to the total price
 ************************************************************************/
int main()
{
/*********************************************************************/
	//Variables
	int   accNum;		// IN & OUT   - The account number
	int   month;		// IN & OUT   - The month
	int   day;			// IN & OUT   - The day
	int   year;			// IN & OUT   - The year
	char  countyCode;	// IN & CALC  - The county code
	float total;		// IN & CALC  - The initial total input
	int	  weight;		// IN & CALC  - The weight
	float discount;		// CALC & OUT - The calculated discount
	float salesTaxs;	// CALC & OUT - The calculated sales tax
	float shipping;		// CALC & OUT - The calculated shipping price
	/*********************************************************************/

	// OUTPUTS class header
	ClassHeader();

	// Takes in the account number, month, day, year, county code,
	//		total price, and weight to be used in the program
	GetSalesInfo (accNum, month, day, year, countyCode, total, weight);

	// Calculates the discount to be subtracted from the total price
	discount = CalcDiscount(month);

	// Calculates the sales tax to be added to the total price
	salesTaxs = CalcSalesTax(countyCode);

	// Calculates the shipping price to be added to the total price
	shipping = CalcShipping(weight);

	// Calculates and outputs the invoice for the user, which includes
	//		the discount, sales tax, shipping, and new total after all
	//		of those values have been taken in to account.
	OutputInvoice(accNum, countyCode, month, day, year,
					total, discount, salesTaxs, shipping);
}
