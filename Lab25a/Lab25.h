/*************************************************************************
 * AUTHOR		: Debaggis, JAY
 * STUDENT ID	: 389657, 298125
 * Lab #25		: Array Train
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/27/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <ios>

using namespace std;

//PROTOTYPES

/*************************************************************************
 * PrintHeader
 * 	This function will output the header
 ************************************************************************/
void PrintHeader (string asNameF, 	//IN & OUT - assignment name
				  char asTypeF, 	//IN & CALC - assignment type
				  int asNumF, 		//IN & OUT - assignment number
				  int numStudentsF);//IN & CALC - num students

/*************************************************************************
 * GetStringArray
 * 	This function will receive the input names and store it in the proper
 * 	array
 ************************************************************************/
void GetStringArray(string StringArF[], // IN - The array for the names
					const int AR_SIZEF);// CALC - The size of the array

/*************************************************************************
 * GetStringInt
 * 	This function will receive the input numbers and store it in the
 * 	proper array
 ************************************************************************/
void GetStringInt(int intArF[],			// IN - The array for the numbers
				  const int AR_SIZEF);	// CALC - The size of the array

/*************************************************************************
 * SearchInt
 * 	Searches through the array for a specific integer
 ************************************************************************/
int SearchInt (const int intArF[],		// CALC - The array for numbers
			   const int AR_SIZEF,		// CALC - The size of the array
		       int searchItemF);		// CALC - The item to be searched
										//			for

/*************************************************************************
 * SearchNumInt
 * 	This function searches through a number of integers and
 *	outputs the number of instances of an age until -1 is input
 ************************************************************************/
void SearchNumInt(const int intArF[],	// CALC - The array for numbers
				  const int AR_SIZEF);	// CALC - The size of the array

/*************************************************************************
 * SearchStringAr
 * 	This function searches for a specific string to be output
 ************************************************************************/
void SearchStringAr(const string stringArF[], // CALC - The array for the
											  // 		  names
					const int AR_SIZEF);	  // CALC - The size of the
											  //		  array

/*************************************************************************
 * OutputLargestNum
 * 	Outputs the value to help indicate to the array which number in the
 * 	array is the largest number of them all
 ************************************************************************/
int OutputLargestNum(const int intArF[],	// CALC - The array for numbers
					 const int AR_SIZEF);	// CALC - The size of the array

/*************************************************************************
 * OutputLowestNum
 * 	Outputs the value to help indicate to the array which number in the
 * 	array is the lowest number of them all
 ************************************************************************/
int OutputLowestNum(const int intArF[],		// CALC - The array for numbers
					const int AR_SIZEF);	// CALC - The size of the array

/*************************************************************************
 * SumInts
 * 	Outputs the sum of the array of integers
 ************************************************************************/
void SumInts(const int intArF[],			// CALC - The array for numbers
			 const int AR_SIZEF);			// CALC - The size of the array
