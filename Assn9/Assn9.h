/*************************************************************************
 * AUTHOR		: Debaggis
 * STUDENT ID	: 389657
 * Assn# 9		: Functions
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/

#ifndef ASSN9_H_
#define ASSN9_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/****************************************************************
* ClassHeader
* This function outputs an assignment name, type
* and number then outputs the appropriate header
* - returns nothing > This will output the class heading.
***************************************************************/
void  ClassHeader();				 // OUT  - Outputs the class heading

/****************************************************************
* GetSalesInfo
* This function receives the user entered account number, month, day,
* year, county code, total, and weight. Then it stores these in to
* variables in the main function.
***************************************************************/
void GetSalesInfo (int    &accNumF,		// IN - The account number
				   int    &monthF,	 	// IN - The month
				   int    &dayF,		// IN - The day
				   int    &yearF,		// IN - The year
				   char   &countyCodeF,	// IN - The county code
				   float  &totalF,		// IN - The total
				   int    &weightF);	// IN - The weight

/****************************************************************
* CalcDiscount
* This function receives the month that was previously entered and
* calculates the discount that is due to the user
***************************************************************/
float CalcDiscount(int monthF); 	 // CALC - Calculates the discount

/****************************************************************
* CalcSalesTax
* This function receives the country code that was previously entered
* and calculates the sales tax that is due
***************************************************************/
float CalcSalesTax(char countyCodeF);// CALC - Calculates the sales tax

/****************************************************************
* CalcShipping
* This function receives the weight that was previously entered and
* calculates the shipping that is due
***************************************************************/
float CalcShipping(int weightF);	 // CALC - Calculates the shipping

/****************************************************************
* OutputInvoice
* This function receives the initial total, the discount, the sales
* tax, and the shipping. Then it takes all of the addition and
* subtraction that is due and outputs the final total that is due.
***************************************************************/
void OutputInvoice(int   accNumF,	 // OUT  - The account number
				   char  countyCodeF,// OUT  - The county code
				   int   monthF,	 // OUT  - The month
				   int   dayF,	 	 // OUT  - The day
				   int   yearF,	 	 // OUT  - The year
				   float totalF,	 // CALC - The previously entered total
				   float discountF,	 // CALC - The calculated discount
				   float salesTaxF,  // CALC - The calculated sales tax
				   float shippingF); // CALC - The calculated shipping

#endif /* ASSN9_H_ */
