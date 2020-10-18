#include <stdio.h>
#include <math.h>

double expo(double x){
  const double epsilon = 1.0e-7;
  double sum = 0;
  int    k = 0;
  double term = 1;
  while (fabs(term) >= epsilon)
  {
    sum += term;
    k++;
    term = term * x / k;
  }
  return sum;
}

int main() {
  double x;
  printf("x? "); 
  scanf("%lf", &x);
  printf("Resultat = %e", expo(x));
}
