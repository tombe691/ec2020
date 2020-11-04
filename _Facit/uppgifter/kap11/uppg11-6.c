void minmax(double *v, int n, double *pmin, double *pmax) {
  *pmin = *v;
  *pmax = *v;
  for (double *p=v; p<v+n; p++) {
    if (*p < *pmin)
      *pmin = *p;
     if (*p > *pmax)
      *pmax = *p;
  }  
}

#include <stdio.h>
int main() {
  double d1, d2;
  double a[5] = {1.5, 3.7, 0.9, 7.8, 2.3};
  minmax(a, 5, &d1, &d2);
  printf("min = %f\nmax = %f\n", d1, d2);
}
