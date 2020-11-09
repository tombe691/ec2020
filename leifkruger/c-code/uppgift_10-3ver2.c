/******************************************************************************
* FILENAME		: uppgift_10-3.c
*
* Encoding		: UTF-8
*
* DESCRIPTION	: Read a text file, replace tabs with 3 spaces. Save the file.
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
*			1           2020-10-23     LK   Start date
*
*******************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 100

int main() {
	char selectedFile[N];
	char tempFile[N];
	int c;
	printf("Ange filens namn du vill ta bort tab och ersätta med 3 mellanslag: ");
	scanf("%s", selectedFile);
	FILE *infile = fopen(selectedFile, "r"); //Open file, reading mode
	if (infile == NULL) {
		printf("Kan tyvärr inte hitta filen %s", selectedFile);
		exit(1);
	}
	else {
		do {
       		c = fgetc (infile);
			prinf("
    	} while (c != EOF);
	}
	fclose (infile);

	
	int character;
	int tecken;
	for (tecken = 0; tecken < N; tecken++) {
		character = fgetc(infile);
		if (character == '\t') { //Replace tab character with 3 spaces
		    for (int i = 0; i < 3; i++) {
				tempFile[tecken+i] = '\x20';
				tecken++;
			}
		}
		else {
			tempFile[tecken] = putchar(character);
		}
	}
	fclose(infile);
	
	int written = 0;
	FILE *f = fopen(selectedFile, "w"); //Open file, write mode
	written = fwrite(tempFile, sizeof(char), sizeof(tempFile), f);
	if (written == 0) {
    	printf("Error during writing to file !");
	}
	fclose(f);		
	return 0;
}