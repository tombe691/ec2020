#include <stdio.h>
#include <string.h>
#include "bil.h"

void skriv_bil(const struct bil* p) {
   printf("%s\n%s\n%d\n%.1f\n%.1f\n\n", 
         p->regnr, p->fabrikat, p->arsmodell, p->tjanstevikt, p->effekt); 
}
         
int main() {
  struct bil b1;
  struct bil b2 = {"ABC123", "Renault Megane Sport Tourer", 2015, 1290, 110};
  strcpy(b1.regnr, "XYZ999");
  strcpy(b1.fabrikat, "Citroen XSara Picasso");
  b1.arsmodell = 2003;
  b1.tjanstevikt = 1360;
  b1.effekt = 115;  
  skriv_bil(&b1);
  skriv_bil(&b2);
  
  struct bil bilar[3] = {b1, b2, {"ZZZ000", "Renault Espace", 2004, 1760, 120}};
  for (int i=0; i<3; i++)
    skriv_bil(&bilar[i]);      
           
}
