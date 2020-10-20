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

int main() {
    /* Declare the file pointer */
    FILE *textfil;
    int tecken, tab, character;

    /* Open the existing file text.txt using fopen() 
     * in read mode using "r" attribute */
    textfil = fopen("textfil.txt", "r");

    /* Check if this filePointer is null
     * which maybe if the file does not exist */
    if (textfil == NULL) {
        printf("textfil.txt file failed to open.");
    } else {
        printf("The file is now opened.\n");

        /* Read the tecken to be read from the file
         * using fgets() method */
        while ((tecken = fgetc(textfil)) != EOF) { /* Copy over contents of text into tecken until EOF is reached */
            if (tecken == '\t') {                  /* Searches for and replaces all tabs with 3 spaces */
                printf("   ");
                tab++; /* Keeps track of how many tabs are replaced */
            } else {
                putchar(tecken);
                character++;
            }
        }
        /* Make sure EOF was actually reached */
        if (feof(textfil)) {
            printf("\nEnd of file reached.");
        } else {
            printf("\n Something went wrong.");
        }
    }

    fclose(textfil); /* Stänger filen och tömmer ev. buffertar */
    printf("\nTabs replaced: %d \nTotal ANSI characters: %d", tab, character);
}
