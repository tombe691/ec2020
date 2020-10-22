#include <stdio.h>
#include <math.h>

double upphoj(double x, double y){
  return exp(y * log(x));
}

int main() {
  double x, y;
  printf("x? "); 
  scanf("%lf", &x);
    printf("y? "); 
  scanf("%lf", &y);
  printf("Resultat = %e", upphoj(x,y));
}

