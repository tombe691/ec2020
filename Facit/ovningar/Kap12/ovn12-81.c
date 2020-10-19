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
  FILE *f = fopen("bilfil.dat", "wb");
  fwrite(&b1, sizeof (struct bil), 1, f);
  fwrite(&b2, sizeof (struct bil), 1, f);  
  fclose(f);
}
