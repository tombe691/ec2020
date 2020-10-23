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

	char tempFile[1000]; //Temporary array
	int character;
	int i = 0; //Index counter for temporary array
	while ((character = fgetc(infile)) != EOF) { //Read individually character
		if (character == '\t') { //Character to compare, a tab
			tempFile[i] = '\x20'; //Insert a space
			i++; //Increase index temporary array
			tempFile[i] = '\x20'; //Insert a space
			i++; //Increase index temporary array
			tempFile[i] = '\x20'; //Insert a space
		}
		else {
			tempFile[i] = character; //Insert character from file 
		}
			i++; //Increase index temporary array
	}
	tempFile[i] = '\0'; //Insert null character
	fclose(infile); 

	FILE *resultatFile = fopen("temp.txt", "w"); //Open new file for writing
	fputs(tempFile, resultatFile); //Store file
	fclose(resultatFile);
	remove("selectedFile"); //Delete original file
	char oldfileName[] = "temp.txt"; //Old temporary file
	rename(oldfileName, selectedFile); //Rename temporary file to original file
	return 0;
}