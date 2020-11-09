//==============================================================================
//Description   : Skriva ut namnet på tre olika sätt.
//                printf, tecken för tecken och en char array.
//Filename      : uppgift_namn3varianter.c
//Date          : 2020-10-12
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>

void main() {
   char b[] = "Leif Krüger";
   char d[] = {'L', 'e', 'i', 'f', '\0'};
   char l = 'L', e = 'e', j = '\x69', f = 'f';
   printf("1. Leif Krüger\n"); 
   printf ("2. %c%c%c%c\n",  l, e, j, f); //Utskrift tecken för tecken
   printf("3. ===\n");
   printf("4. %s \n", d);
   printf("5. ===\n");
   int antal = sizeof d/sizeof d[0]; //utskrift av array
   for (int i=0; i < antal; i++) {
      char tecken = d[i];
      printf("%c", tecken);
   }
   printf("\n");
   int antalb = sizeof b/sizeof b[0]; //utskrift av array
   for (int i=0; i < antalb; i++) {
      char teckenb = b[i];
      printf("%c", teckenb); //utskrift av array med nolltecken efter
   }
   printf("\n");
      for (int i=0; i < antalb-1; i++) {
      char teckenc = b[i];
      printf("%c", teckenc); //utskrift utan nollteclken efter pga -1
   }
   printf("\n");
}