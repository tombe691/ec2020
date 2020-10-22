#include <stdio.h>

double pris(double exkl, double procent) {
     return exkl + exkl*procent/100;
}
  
int main() {
  double x;
  printf("Pris exkl. moms? "); 
  scanf("%lf", &x);
  printf("Pris inkl. moms: %.2f", pris(x, 25));
}
