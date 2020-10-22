#include <stdio.h>
#define N 10
int main() {
  double a[N];
  for (int i=0; i<N; i++)
     a[i] = 1.0/(i+1);     // Obs! 1/(i+1) hade givit heltalsdivision
  for (int i=0; i<N; i++)
    printf("%10f", a[i]);       
}
