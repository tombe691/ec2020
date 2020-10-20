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
//      2020-10-20: Revised by Noor:
//                      Added <stdio.h>. Changed double main to int main.
//                      Added missing semicolons. Declared weeklyWages and changed comparator '==' to assign '='.
//                      Hardcoding numbers is bad practice. Replaced with scanf() functions.
//                      Inside printf functions:
//                          Changed %d to %lf (with 0 decimals)
//                          Moved the separate text within quotes inside the first set of quotes.
//                          Removed unnecessary %s placeholders
//                          Increased output verbosity by adding hoursPerWeek value.
//-----------------------------------------------------------------------
#include <stdio.h>
int main()
{
	// Define and prompt user to initialize variables
    int hoursPerWeek;
    double hourlyWages;
    printf("Enter hours per week: \n");
	scanf("%d\n", &hoursPerWeek);
    printf("Enter hourly wages (kr): \n");
    scanf("%lf\n", &hourlyWages);

	// Calculate weekly wage
	double weeklyWages = hoursPerWeek * hourlyWages;

	// Show result
	printf("Given an hourly wage of %.lf kr\n", hourlyWages);
	printf("The weekly wages, based on %d hours will be: %.lf kr\n", hoursPerWeek, weeklyWages);

	return 0;
}
