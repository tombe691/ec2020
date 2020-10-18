/*
______________________________________________________________________________________
Date        : 2020-10-05
File        : uppgift8.5.c
Description : Göra 2 funktioner och lägga in för bibliotek
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include <stdio.h>
//Inkuderar funktionerna
#include "functions.h"
//Max 100 element
#define Size 100
int main () {
   //Gör ett array fält
   double array[Size];
   //Variabel som slänger in värdet användaren skriver in
   int antalVarden;
   printf("Hej, hur manga varden vill du skriva in?\n");
   scanf("%d", &antalVarden);
   // Gör att den läser in det så många gånger som antalvarden är
   for (int i = 0; i<antalVarden; i++)
   {
      printf("Varde for position %d\n", i+1);
      
      scanf("%lf", &array[i]);
   }
   //Gör en variabel av funktionen så funktionen inte
   //förbrukas. 
   double summaAvArray = sum(array, antalVarden);
   printf("Arrayen ser ut sahar: %.2lf\n",summaAvArray);
   double kvadsumma = kvad_sum(array,antalVarden);
   printf("Kvadrerat ser det ut sahar: %.4lf\n", kvadsumma);
   return 0;
}