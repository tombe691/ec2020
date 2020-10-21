/*_______________________________________________
 Name		  : 10.2main.character
 Author	  	  : Eric Åshede
 Description  : Ersätter tabulator (/t) med tre mellanslag ("   ")
 Date	  	  : 2020-10-18
_________________________________________________
*/
#include <stdio.h>
#include <stdlib.h>
#include "mystring/mystring.h"    // innehåller open_file

int main() {
    char name[100];
    printf("File name? ");
    scanf("%s", name); // skriv in filnamn
    FILE *infile = fopen(name, "r");
    
    if(infile == NULL) {
        printf("Can't find file\n"); //skrivs ut om fil ej hittas
        exit(1);
    }

int character;
    while ((character = fgetc(infile)) != EOF) {
        if (character == '\t') // ersätter tabulator med mellanslag x3
	    printf("   ");
        else
        putchar(character);
    }

    fclose(infile); //stänger fil och tömmer buffertar
}
          