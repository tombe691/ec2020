#include <stdio.h>
#include <string.h>
#include "bil.h"

void skriv_bil(const struct bil* p) {
   printf("%s\n%s\n%d\n%.1f\n%.1f\n\n", 
         p->regnr, p->fabrikat, p->arsmodell, p->tjanstevikt, p->effekt); 
}
        
int main() {
  struct bil b1, b2;
  FILE *f = fopen("bilfil.dat", "rb");
  fread(&b1, sizeof (struct bil), 1, f);
  fread(&b2, sizeof (struct bil), 1, f);  
  fclose(f);
  skriv_bil(&b1);
  skriv_bil(&b2);
}
