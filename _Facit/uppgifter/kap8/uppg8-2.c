#include <stdio.h>

_Bool ar_sorterat(double f[], int antal) {
  for (int i=1; i < antal; i++)
    if (f[i] < f[i-1])
      return 0;
  return 1;
}

int main() {
  double a[1000];
  int n = 0;
  while (scanf("%lf", &a[n]) == 1)
    n++;  
  if (ar_sorterat(a, n))
    printf("Fältet är sorterat");
  else
    printf("Fältet är inte sorterat");
}  
    
      
    

