  #include <math.h>
  
  double sigma(double f[], int n) {
    double term1 = kvad_sum(f, n);
    double sum2 = sum(f, n);
    double term2 = sum2*sum2/n;
    return sqrt((term1-term2)/(n-1));
  } 

