#include <stdio.h>

int read_int(void) {
  int i;
  scanf("%d", &i);
  return i;
}

double read_double(void) {
  double x;
  scanf("%lf", &x);
  return x;
}

double upphojt_till(double x, int n) {
  double res = 1;   
  int i = 1; 
  if (n >= 0)
    for ( ; i <= n; i++) 
      res = res * x;
  else
    for ( ; i <= -n; i++) 
      res = res / x;
  return res;
}
int main() 
{
  printf("x? ");
  double xx = read_double();
  printf("n? ");
  int nn = read_int();
  printf("Resultat: %f", upphojt_till(xx, nn));
}

