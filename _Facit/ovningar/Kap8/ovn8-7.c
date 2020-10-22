#include <stdio.h>

void fyll(double a[], int i1, int i2, double x) {
  for (int i=i1; i<=i2; i++)
    a[i] = x;
}

void skriv(double a[], int n) {
  for (int i=0; i<n; i++)
    printf("%1.2f\n", a[i]);
}

int main() {
  double f[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  fyll(f, 5, 9, 2.3);
  skriv(f, sizeof f/sizeof f[0]);
}