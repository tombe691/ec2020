#include <stdio.h>

long int fibonacci(void) {
  static long int a = 0, b = 1;
  long int c = a + b;
  a = b; b = c;
  return c;
}

int main() {
  for (int i=1; i<=20; i++)
    printf("%ld\n", fibonacci());
}

