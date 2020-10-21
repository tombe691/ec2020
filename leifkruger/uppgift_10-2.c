/******************************************************************************
* FILENAME		: uppgift_10-2.c
*
* Encoding		: UTF-8
*
* DESCRIPTION	: Read a text file, show in terminal.
*
* FUNCTIONS		: Replace horizontal tabulation (HT) with three spaces.
*
* NOTES			: Menu language - Swedish
*
*				  Copyright L.Krüger 2020.  All rights reserved.
*
* AUTHOR		: Leif Krüger, info@leifkruger.se
*
* CHANGES
*
* REF NO	VERSION		DATE (YYMMDD)  WHO	DETAIL
* -----------------------------------------------------------------------------
*			1           2020-10-18     LK   Start date
*
*			2           2020-10-19     LK   Modify comments & variable names
*******************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	char selectedFile[100];
	printf("Ange filens namn du vill skriva ut i terminalfönstret: ");
	scanf("%s", selectedFile);
	FILE *infile = fopen(selectedFile, "r"); //Open file, reading mode
	if (infile == NULL) {
		printf("Kan tyvärr inte hitta filen %s", selectedFile);
		exit(1);
	}
	int c;
	while ((c = fgetc(infile)) != EOF) { //
		if (c == '\t') { //Replace tab character with 3 spaces
			printf("   ");
		} else {
			putchar(c);
		}
	}
	fclose(infile);
	return 0;
}