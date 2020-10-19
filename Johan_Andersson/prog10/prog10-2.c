//Johan Andersson, J-Azon @github.com, 2020,10,15
//använd helst inte som exemplar med namnen intakta.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    FILE *infil = fopen("cout.txt", "r");   //öppnar filen cout.txt
        if(infil == NULL){                  //om inte filen finns.
        printf("Can't find the file..\n"); 
        exit(1);
    }
    int tecken;
    while((tecken = fgetc(infil)) != EOF){  //söker igenom texten
        if(tecken == '\t'){                 //om tecken = tabulator
            printf("   ");                  //så gör den om till 3"   "
        }
        else{
            putchar(tecken);
        }        
    }
    fclose(infil);                          //stänger filen igen.
}