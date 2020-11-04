#include <stdio.h>

double kol_sum(double f[][5], int antal_rader, int k) {
  double sum = 0;
  for (int i=0; i<antal_rader; i++)
    sum = sum + f[i][k];
  return sum;
}

int main() {
  double a[4][5];
  a[0][2] = 1;
  for (int i=1; i<4; i++) 
    a[i][2] = a[i-1][2]/10;  
  printf("Summan av tredje kolumnen är %f", kol_sum(a, 4, 2)); 
}

 