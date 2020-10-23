//-----------------------------------------------------------------------
// Object: This program has some syntax errors. Use the compiler to find 
// and correct them. Document your changes with comments or in log.
//-----------------------------------------------------------------------
// File:    errorsearch.c
// Summary: This program calculates the weekly pay, given hours per week
// and wages per hour.
// Version: 1.1
//-----------------------------------------------------------------------
// Log: 2015-03-09: Created the file, Nisse!
//		2018-08-14: Revised by Lisa. Using manipulators to format output instead 
//					of io-flags. Inserted "wait for return code" at the end.
//		2019-10-18: Revised by Tomas. Converted to English version and VS 2012.
//		2019-10-21: Revised by Nisse for VS 2013.
//      
//-----------------------------------------------------------------------

#include <stdio.h> //Include stdio header file

double main()  
{
	// Define and initialize variables
	int hoursPerWeek = 35; //Semicolon
	double hourlyWages = 83; //Semicolon
	
	// Calculate weekly wage
	double weeklyWages = (double)hoursPerWeek * hourlyWages; //Added data type double
								 //Changed comparison operator to assignment
								 //Casts int variable to double

	// Show result
	printf("%s %.2f %s\n", "Given an hourly wage of ", hourlyWages, " kr");   //Changed the %f specifier to display 2 decimal points
	printf("%s %.2f %s\n", "The weekly wages will be: ", weeklyWages, " kr"); //Changed the %d specifier to display floating point values, limited to 2 decimal points
										  //Corrected the output string

	return 0;
}
