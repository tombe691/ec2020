//==============================================================================
//Description   : Fibonacci talföljd.
//Filename      : uppgift_7-2_ver2.c
//Date          : 2020-10-07
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#include "uppgift_7-2h.h"

int main() {
int antalTal; //Variabel för att visa x st tal

   printf("\n");
   printf("Detta program beräknar Fibonacci talföljden. \n\n");
   printf("Hur många tal i Fibonacci talföljden vill du se? (max 47 st)");
   scanf("%d", &antalTal);
   printf("\n 0 ");
   for (int i = 0; i < antalTal; i++) {
      printf(" %d ", fibonacci());
   }
   printf("\n\n");
}