  double sum(double f[], int n) {
    double sum = 0;
    for (int i=0; i<n; i++)
     sum += f[i];
    return sum;
  }
 
  double kvad_sum(double f[], int n) {
    double sum = 0;
    for (int i=0; i<n; i++)
     sum += f[i] * f[i];
    return sum;
  }
