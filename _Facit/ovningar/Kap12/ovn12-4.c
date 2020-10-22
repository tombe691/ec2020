#include <stdio.h>
#include <string.h>
#include "bil.h"

int main() {
  struct bil b1;
  struct bil b2 = {"ABC123", "Renault Megane Sport Tourer", 2015, 1290, 110};
  strcpy(b1.regnr, "XYZ999");
  strcpy(b1.fabrikat, "Citroen XSara Picasso");
  b1.arsmodell = 2003;
  b1.tjanstevikt = 1360;
  b1.effekt = 115;  

  struct bil *p1 = &b1, *p2 = &b2;  
  printf("%s\n%s\n%d\n%.1f\n%.1f\n\n", 
         p1->regnr, p1->fabrikat, p1->arsmodell, p1->tjanstevikt, p1->effekt); 
  printf("%s\n%s\n%d\n%.1f\n%.1f\n\n", 
         p2->regnr, p2->fabrikat, p2->arsmodell, p2->tjanstevikt, p2->effekt);           
}

