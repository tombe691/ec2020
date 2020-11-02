/******************************************************************************
* FILENAME		: uppgift_11-6_ver_2.c
*
* Encoding		: UTF-8
*
* DESCRIPTION	: .
*
* FUNCTIONS		: .
*
* NOTES			: Menu language - Swedish
*
*				https://javatutoring.com/c-program-find-maximum-minimum-element-in-array/
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
#include <string.h>
#include "function_11-6_ver_2.h"
 
int main()
{
	char selectedFile[100];
	double temperaturArray[100];
	int i;
	printf("Ange temperaturfilens namn: ");
	scanf("%s", selectedFile);
	FILE *infile = fopen(selectedFile, "r"); //Open file, reading mode
	if (infile == NULL) { //Check if file excist
		printf("Kan tyvärr inte hitta filen %s", selectedFile);
		exit(1);
	}
	for (i = 0; i < 100; i++){ //Read file into array
        fscanf(infile, "%lf,", &temperaturArray[i]);
    }
    minmaxNumber(temperaturArray, 100);	//Sort min/max temperatur
	fclose(infile);
	return 0;   
}