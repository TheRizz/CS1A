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
 * FUNCTION  Outputs the Invoice
 *_________________________________________________________
 * Outputs the invoice for the user
 *_________________________________________________________
 * PRE-CONDITIONS
 *		totalF	 : Assignment total has to be previously defined
 *		discountF: Assignment discount has to be previously defined
 *		salesTaxF: Assignment sales tax has to be previously defined
 *		shippingF: Assignment shipping has to be previously defined
 * POST-CONDITIONS
 *		This function will output the initial total, the calculated
 *		discount, calculated sales tax, calculated shipping, and then
 *		the new total after all of those values have been added or
 *		subtracted to the total.
 ***********************************************************/
void OutputInvoice(int   accNumF,	 // OUT  - The account number
				   char  countyCodeF,// OUT  - The county code
				   int   monthF,	 // OUT  - The month
				   int   dayF,	 	 // OUT  - The day
				   int   yearF,	 	 // OUT  - The year
				   float totalF,	 // CALC - The previously entered total
				   float discountF,	 // CALC - The calculated discount
				   float salesTaxF,  // CALC - The calculated sales tax
				   float shippingF)  // CALC - The calculated shipping
{

		cout << left << setw(42) << "ACCOUNT NUMBER" << "COUNTY\n";
		cout << setw(5) << " " << accNumF << setw(30) << " ";

		// This will figure out which county the user is in and
		// 		output the correct county name
		if (countyCodeF == 'O')
		{
			cout << "Orange County\n\n";
		}
		else if (countyCodeF == 'S')
		{
			cout << "  San Diego\n\n";
		}
		else if (countyCodeF == 'L')
		{
			cout << "Los Angeles\n\n";
		}

		// This lines up all of the outputs and makes them nice and neat
		cout << "DATE OF SALE: " << monthF << '/' << dayF << '/' << yearF;
		cout << endl << endl;

		cout << fixed << setprecision(2);
		cout << setw(20) << "SALE AMOUNT:" << '$';
		cout << right << setw(8) << totalF << endl << left;

		// This section calculates values to be used in the output
		discountF *= totalF;
		totalF -= discountF;
		salesTaxF *= totalF;
		totalF = totalF - discountF + salesTaxF + shippingF;

		// These are lined up like the line above that is outputting
		cout << setw(20) << "DISCOUNT:" << '$';
		cout << right << setw(8) << discountF << endl << left;

		cout << setw(20) << "SALES TAX:" << '$';
		cout << right << setw(8) << salesTaxF << endl << left;

		cout << setw(20) << "SHIPPING:" << '$';
		cout << right << setw(8) << shippingF << endl << left;

		cout << setw(20) << "TOTAL DUE:" << '$';
		cout << right << setw(8) << totalF << endl << left;
		cout << endl << endl;
}
