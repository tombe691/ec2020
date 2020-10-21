/******************************************************************************
* FILENAME		: function_11-6_ver_3.c (main file uppgift_11-6_ver_3.c)
*
* Encoding		: UTF-8
*
* DESCRIPTION	: Read a file, numberarray. Sort out minimum and maximum value
*
* FUNCTIONS		: 
*
* NOTES			: Menu language - Swedish
*
* Find ideas from
* https://javatutoring.com/c-program-find-maximum-minimum-element-in-array/
*
*				  Copyright L.Krüger 2020.  All rights reserved.
*
* AUTHOR		: Leif Krüger, info@leifkruger.se
*
* CHANGES
*
* REF NO	VERSION		DATE (YYMMDD)  WHO	DETAIL
* -----------------------------------------------------------------------------
*			1           2020-10-20     LK   Start date
*
*******************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include "function_11-6_ver_3.h"

void minmaxNumber(double *minmax, int n, double *minNumber, double *maxNumber) {
	*minNumber=*minmax;
	*maxNumber=*minmax;
	for(double *j = minmax; *j < n; j++) {
		if(*minNumber > *j ) {
			*minNumber = *j;
		}   
		if(*maxNumber < *j) {
			*maxNumber = *j;
		}       
    }
}