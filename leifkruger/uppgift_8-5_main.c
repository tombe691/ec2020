//==============================================================================
//Description   : Summa av element samt summa av kvadrat av element.
//Filename      : uppgift_8-5_main.c
//Date          : 2020-10-10
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#include "uppgift_8-5.h"

int main() {
   double v[] = {1.5, 0.55, 3.5, 10};
   int antal = sizeof v/sizeof v[0]; //Beräkna antal element
   double summa = sum(v, antal); //Anropa funktion för summering
   printf("Summan av elementen i fält v är %.2lf", summa);
   printf("\n");
   double kvad_summa = kvad_sum(v, antal);  //Anropa funktion summering av kvadrater
   printf("Summering av kvadraterna av elementen i fält v är %.6lf", kvad_summa);
   printf("\n");
}