#include <stdio.h>
#define N 10
int main() {
  double a[N];
  for (int i=0; i<N; i++)
    a[i] = 1.0/(N-i);     	// Obs! 1/(N-i)) hade givit heltalsdivision
  for (int i=0; i<N; i++)
    printf("%10f", a[i]);       
}
