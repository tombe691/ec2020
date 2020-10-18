#include <stdio.h>
#include <string.h>
#include "person.h"

struct bil2 {
  char regnr[7];
  char fabrikat[30];
  int arsmodell;
  double tjanstevikt;
  double effekt;
  struct person *agare;
};

int main() {
  struct person pers1 = {"Erik", "Lindgren", 1980, 0};
  struct person pers2 = {"Anna", "Fredriksson", 1979, 0};
  struct bil2 b1 = {"XYZ999", "Citroen XSara Picasso", 2003, 1360, 115, &pers1};
  struct bil2 b2 = {"ABC123", "Renault Megane Sport Tourer", 2015, 1290, 110, &pers2};
  printf("%s\n%s\n%d\n%.1f\n%.1f\n%s\n\n", 
         b1.regnr, b1.fabrikat, b1.arsmodell, b1.tjanstevikt, b1.effekt, b1.agare->fornamn); 
  printf("%s\n%s\n%d\n%.1f\n%.1f\n%s\n\n", 
         b2.regnr, b2.fabrikat, b2.arsmodell, b2.tjanstevikt, b2.effekt, b2.agare->fornamn);           
}
