#include <stdio.h>
#include <math.h>

double roten(double x){
  const double epsilon = 1e-6;
  double g = x;
  double gny = x / 2;   // första gissning

  while (fabs(g-gny)>epsilon)
  {
    g = gny;
    gny = (g + x/g)/2;
  }
  return gny;
}

int main() {
  double x;
  printf("x? "); 
  scanf("%lf", &x);
  printf("Resultat = %e", roten(x));
}
