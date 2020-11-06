#include <stdio.h>

void skriv_ut(int *a, int n) {
  for (int *p=a; p<a+n; p++)
    printf("%d  ", *p);
}

// Testprogram, ingick inte i uppgiften
int main() {
int f[5] = {1,2,3,4,5};
skriv_ut(f, 5);
}

