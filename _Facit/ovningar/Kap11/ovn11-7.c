#include <stdio.h>
#include <math.h>

_Bool nastan_lika(double x, double y) {
  return fabs(x-y) < 1.0e-10;
}

_Bool equal(const double *first,  const double *last, double *first2, _Bool (*f)(double, double)) {
  for (const double *p=first; p<last; p++, first2++) 
    if (!f(*p, *first2))
      return 0;
  return 1;
}

int main() {
   double v[4] = {1.0, 1.0, 2.00000000001, 3.0};
   double w[4] = {1.0, 1.0, 2.00000000002, 3.0};
   if (equal(v, v+4, w, nastan_lika))
     printf("Lika\n");
   else 
     printf("Inte lika\n");     
   
 }