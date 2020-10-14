/*_______________________________________________
 Name	      : Uppg8-5.c
 Author	  	  : Eric Åshede
 Description  : Inkluderar indexfunk.c och indexfunk.h för att räkna ut summa och kvadrat av fält.
 Date	  	  : 2020-10-12
_________________________________________________
*/
//Standard .h filer
#include <stdio.h>
#include <stdlib.h>
//Inkluderade filer med funktioner för indexberäkning
#include "Indexfunk.h"
#include "Indexfunk.c"

int main() {
    //Skapar array för att beräkna, sätt index värden
    double a[] = {1, 2, 3};
    //Anropa funktioner för att beräkna värden
    double x = sum_index(a);
    double z = sum_kvad_index(a);
    //Skriv ut summan av uträkning
    printf("Summan: %d\n", x);
    printf("Summan kvadrat: %d\n", z);
    return 0;
}
/* Programmet kör inte, jag får felmeddelande: error: too few arguments to function 'sum_index' och samma för 'sum_kvad_sum'. */