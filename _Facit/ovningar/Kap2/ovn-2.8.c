#include <stdio.h>
int main () {
   double pris;
   int procent;
   printf("Pris (inkl. moms)?  ");
   scanf("%lf", &pris);
   printf("Momssats? ");
   scanf("%d", &procent);
   double exkl = pris / (1 + procent/100.0);
   double moms = pris - exkl;
   printf("Pris exkl moms: %7.2f\n", exkl);
   printf("Moms:           %7.2f\n", moms);
}