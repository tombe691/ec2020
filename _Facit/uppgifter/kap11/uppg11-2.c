#include <math.h>

double langd(double *v, int n) {
  double l=0;
  for (double *p=v; p<v+n; p++)
    l = l + *p * *p;
  return sqrt(l);
}
