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
  printf("%s\n%s\n%d\n%.1f\n%.1f\n\n", 
         b1.regnr, b1.fabrikat, b1.arsmodell, b1.tjanstevikt, b1.effekt); 
  printf("%s\n%s\n%d\n%.1f\n%.1f\n\n", 
         b2.regnr, b2.fabrikat, b2.arsmodell, b2.tjanstevikt, b2.effekt);           
}
