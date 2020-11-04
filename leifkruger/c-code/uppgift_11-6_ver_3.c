/******************************************************************************
* FILENAME		: uppgift_11-6_ver_3.c
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

int main() {
	int n = 100; //Max number of values in numberfile
	char selectedFile[100];
	double numberArray[n];
	double minNumber, maxNumber;
	int i;
	printf("Ange nummerfilens namn: ");
	scanf("%s", selectedFile);
	FILE *infile = fopen(selectedFile, "r"); //Open file, reading mode
	if (infile == NULL) { //Check if file excist
		printf("Kan tyvärr inte hitta filen %s", selectedFile);
		exit(1);
	}
	for (i = 0; i < n; i++) { //Read file into array
		fscanf(infile, "%lf", &numberArray[i]);
    }

	//n = sizeof(numberArray)/sizeof(numberArray[i]); //Calc number of elements
    minmaxNumber(numberArray, n, &minNumber, &maxNumber);	//Sort min/max value
    printf("Min-värde: %.2lf \n", minNumber);
    printf("Max-värde: %.2lf \n", maxNumber);
	fclose(infile);
	return 0;
}