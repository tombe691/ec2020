/******************************************************************************
* FILENAME     :  uppgift_10-2.c
*
* DESCRIPTION  :  Läs textfil, skriv ut innehållet i kommandofönstret
*
* FUNCTIONS    :  
*
* NOTES        :  
*
*                 Copyright L.Kruger 2020.  All rights reserved.
*
* AUTHOR       :  Leif Krüger
*
* CHANGES      :
*
* REF NO         VERSION      DATE (YYMMDD)  WHO      DETAIL
* -----------------------------------------------------------------------------
*                 1           2020-10-18     LK       Start date
*
*
*******************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	char textfil[100];
	printf("Ange filens namn du vill skriva ut i terminalfönstret: ");
	scanf("%s", textfil);
	FILE *infil = fopen(textfil, "r"); //Öppna filen "textfil" för läsning
	if (infil == NULL) {
		printf("Kan inte hitta filen %s", textfil);
		exit(1);
	}
	int c;
	while ((c = fgetc(infil)) != EOF) { //
		if (c == '\t') { //Om tab skriv ut 3 st mellanslag
			printf("   ");
		} else {
			putchar(c);
		}
	}
	fclose(infil);
	return;
}