#include <stdio.h>

void skriv_ut(int f[][5] , int antal_rader) {
  for (int i=0; i<antal_rader; i++) {
    for (int j=0; j<5; j++)
        printf("%d\t", f[i][j]);
     printf("\n");
  }
}

void aendra(int f[][5], int antal_rader) {
  for (int i=0; i<antal_rader; i++)
    for (int j=0; j<5; j++)
      f[i][j] = i+j;
}

int main() {
  int a[10][5];
  aendra(a, 10);
  skriv_ut(a, 10);
}
