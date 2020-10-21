// Filen main.c

#include <stdio.h>
#include "nfak.h"
 
int main () {
  int n;
  printf("n? ");
  scanf("%d", &n);
  printf("n! = %.0f", nfak(n));
}


////////////////////////

// Filen nfak.h

double nfak(int);

////////////////////////

// Filen nfak.c

#include "nfak.h"
 
double nfak(int n) {
  double r=1;
    for (int i=2; i <=n; i++)
      r = r*i;
  return r;
}