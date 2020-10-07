//==============================================================================
//Description   : Fibonacci talföljd.
//Filename      : uppgift_7-2.c
//Date          : 2020-10-07
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#include "uppgift_7-2h.h"

int main() {
int val; //Menyvariabel för att visa nästa tal eller avsluta

   while(1) {
      printf("\nTryck (1) visa nästa tal i talföljden, (2) avsluta. ");
      scanf("%d", &val);
      if (val == 1) {
         printf("\nNästa tal i fibonacci-talföljden är: %d\n", fibonacci());
      }
      else {
         break;
      }
   }
}