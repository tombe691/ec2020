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
//		2020-10-20: Revised by Niklas for GCC. Added standard I/O.
//					Format output using standard I/O with long float and 2 dec.
//					Changed double main() to int main(void), didnt make sense
// 					with double.
//					Changed double hourlyWages to static double hourlyWages.
//					Changed int hoursPerWeek to static double hoursPerWeek.
//					Added datatype for hourlyWages, initialized as double.
//					Using static variables to minimize leakage/conflicts.
//					Changed weeklyWages from comparison to assignment
//
//-----------------------------------------------------------------------

// Added standard i/o just so wet get some input/output without "manipulators"
#include <stdio.h>

// It sure works with double but doesn't make much sense to return a double value.
// since we only return a zero (0) anyway
// If under POSIX and attempt to return 3.14, the calling process will almost
// always see 255. Just change to int since we return 0 anyway.
int main(void)
{
	// Define and initialize variables
	// Merged all variables into one string.
	// Kept double type if ever gonna use decimals (34.50 weeks or 65.10
	// hourly wages.)
	static double weeklyWages, hoursPerWeek = 35., hourlyWages = 83.;

	// Changed from comparison to assignment
	weeklyWages = hoursPerWeek * hourlyWages;

	// Changed to match standard i/o and not "manipulators"
	// Also printing results with 2 decimals.
	printf("The weekly wages will be: %.2lf kr\n", weeklyWages);
	printf("Given an hourly wage of: %.2lf kr\n", hourlyWages);

	// Nothings changed here, changed datatype for main function to match this.
	return 0;
}
