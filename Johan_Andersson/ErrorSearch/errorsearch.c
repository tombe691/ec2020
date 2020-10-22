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
//      2020-10-21: Fixed errors and misses - Johan Andersson, J-Azon @github
//-----------------------------------------------------------------------
#include <stdio.h>								//Added stdio.h.

int main()										//Changed main func, from double to int.
{
	// Define and initialize variables
	int weeklyWages, hoursPerWeek = 35;			//Added Added int weeklyWages and a ';'.
	double hourlyWages = 83;					//Added ';'.

	// Calculate weekly wage
	weeklyWages = hoursPerWeek * hourlyWages;	//removed an = operator to make func work.

	// Show result 	//added a ".2" to the float value being shown.
	printf("%s %.2f %s\n", "Given an hourly wage of: ", hourlyWages, " kr");
	//removed a space and enlarged the T 
	printf("%s %d %s\n", "The weekly wages will be: ", weeklyWages, " kr"); 
	return 0;
}
