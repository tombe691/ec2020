#include <string.h>

void baklanges(char *s1, const char *s2) {
  int n = strlen(s2);
  int i = 0, j = n-1;
  for (; i < n; i++, j--)
    s1[i] = s2[j];
  s1[i] = '\0';
}

// Testprogram
#include <stdio.h>
int main() {
  char a[30], b[30] = "program";
  baklanges(a, b);
  puts(a);
}
