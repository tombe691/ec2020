/*	___________________________________
 *	Name		: uppgift.10.2.c
 *	Author		: Noor Latif, noor@latif.se
 *	Date		: 2020-10-17
 *	------------Description------------
 *	Searches for and replaces all tabs with 3 spaces in chosen text file.
 *	Whilst counting the actions made. 
 *	___________________________________
 */
#include <stdio.h>

int main(){
	/*  */
	FILE *text = fopen("text.txt", "r"); 
	int tecken, tab, character;
	while ((tecken = fgetc(text)) != EOF){ /* Copy over contents of text into tecken until EOF is reached */
		if (tecken == '\t'){ 	/* Searches for and replaces all tabs with 3 spaces */
			printf("   ");
			tab++;
		} else {	/* Prints out the new content when no more tabs are detected */
			putchar(tecken);
			character++;
		}
	}
	fclose(text); /* Stänger filen och tömmer ev. buffertar */
	printf("\nTabs replaced: %d \nTotal ANSI characters: %d", tab, character);
}
