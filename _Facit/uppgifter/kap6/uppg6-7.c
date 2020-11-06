#include <stdio.h>
#include <limits.h>

int antal_ar(double b, double r, double ut) {
  if (b * 0.01*r >= ut)
    return INT_MAX;
  else {
    int n = 0;
    while (1) {
      b = b + b*0.01*r-ut;
      if (b < 0)
        break;
      n++;
    }
    return n;
  }
}
  
int main() {
  double bel, ranta, uttag;
  printf("Belopp? "); 
  scanf("%lf", &bel);
  printf("R�ntesats? "); 
  scanf("%lf", &ranta);
  printf("�rligt uttag? "); 
  scanf("%lf", &uttag);
  int tid = antal_ar(bel, ranta, uttag);
  if (tid == INT_MAX)
    printf("Pengarna r�cker hur l�nge som helst"); 
  else
      printf("Pengarna r�cker %d �r", tid);
}
