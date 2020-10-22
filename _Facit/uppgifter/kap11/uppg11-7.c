#include <math.h>

void statistik(const double *x, int n, double *mv, double *sigma)
{
  double sum = 0, kvad_sum = 0;

  for (double *p; p<x+n; p++) {
    sum = sum + *p;
    kvad_sum = kvad_sum + *p * *p;
  }
  *mv = sum/n; 
  *sigma = sqrt((kvad_sum - sum*sum/n)/(n-1));
}
