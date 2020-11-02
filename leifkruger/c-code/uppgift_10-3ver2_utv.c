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
#define N 500

int main() {
	char selectedFile[N];
	printf("Ange filens namn du vill ta bort tab och ersätta med 3 mellanslag: ");
	scanf("%s", selectedFile);
	FILE *infile = fopen(selectedFile, "r"); //Open file, reading mode
	if (infile == NULL) {
		printf("Kan tyvärr inte hitta filen %s", selectedFile);
		exit(1);
	}

	char tempFile[1000];
	int character;
	int i = 0;
	while ((character = fgetc(infile)) != EOF) {
		if (character == '\t') {
			tempFile[i] = '\x20';
			i++;
			tempFile[i] = '\x20';
			i++;
			tempFile[i] = '\x20';
		}
		else {
			tempFile[i] = character;
		}
			i++;
	}
	tempFile[i] = '\0';
	fclose(infile);

	FILE *resultatFile = fopen("test1.txt", "w");
	fputs(tempFile, resultatFile);
	fclose(resultatFile);
	
/*	
	int results = fputs(tempFile, file);
	if (results == EOF) {
	}
	fclose(file);



/*	
	tempFile2[1000];
	printf("i är: %d \n", i); //Kontroll
	printf("%s \n", tempFile); //Kontroll

	printf("%c \n", tempFile[1]); //Kontroll

	for (int j=0;  > i; j++) {
		if (tempFile[j] == '\t') { //Replace tab character with 3 spaces
			tempFile2[j] = '\xA0';
			i++;
			tempFile[j + 1] = '\xA0';
			i++;
			tempFile[j + 2] = '\xA0';
			i++;
		}
		else {
			if (tecken + tempTecken >= N) {
				tempTecken--;
			}
	
	}




	int tecken;
	int tempTecken = 0;
	for (tecken = 0; tecken < N; tecken++) {

		
		character = fgetc(infile);
		if (character == '\t') { //Replace tab character with 3 spaces
			tempFile[tecken + tempTecken] = '\xA0';
			tempTecken++;
			tempFile[tecken + tempTecken] = '\xA0';
			tempTecken++;
			tempFile[tecken + tempTecken] = '\xA0';
			tempTecken++;
		}
		else {
			if (tecken + tempTecken >= N) {
				tempTecken--;
			}
			tempFile[tecken + tempTecken] = character;
		}
	}
	tempFile[N] = '\0';

	printf("%s ", tempFile);
	
	int written = 0;
	FILE *f = fopen(selectedFile, "w"); //Open file, write mode
	written = fwrite(tempFile, sizeof(char), N, f);
	if (written == 0) {
    	printf("Error during writing to file !");
	}
	fclose(f);
	
	
	
	
		while ((character = fgetc(infile)) != EOF) {
		readFile[i] = character;
		i++;
		if (character == '\t') {
			antalTabs++;
		}
	}
	readFile[i] = '\0';
	fclose(infile);

	
	
	
	
*/		
	return 0;
}