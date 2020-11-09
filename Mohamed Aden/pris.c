#include <stdio.h>

// 04/10/03 kod räknar vad saker skulle kosta med moms

double pris(double utan, double procent) {
     return utan + utan*procent/100;
}
  
int main() {
  double x;
  printf("Pris utan moms? "); 
  scanf("%lf", &x);
  printf("Pris utan moms: %.2f", pris(x, 25));
}