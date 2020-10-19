#include <stdio.h>

void skriv_bak(int *a, int n) {
  for (int *p=a+n-1; p>=a; p--)
    printf("%d  ", *p);
}

// Testprogram, ingick inte i uppgiften
int main() {
int f[5] = {1,2,3,4,5};
skriv_bak(f, 5);
}

