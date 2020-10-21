#include <stdio.h>
#include <math.h>
int main() {
  double term = 1, 
         sum  = 1;
  int tecken = 1;
  for (int k=2; fabs(term)>=1.0e-5; k++) {
    tecken = -tecken;
    term = tecken * 1.0/k;
	 sum = sum + term;
  }   
  printf("Summan blir: %.5f", sum);   
}
