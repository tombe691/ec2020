#include <stdio.h>

_Bool ar_skottar(int ar) {
  return (ar % 4 == 0 && ar % 100 != 0) || ar % 400 == 0;
}

int main () {
  printf("Skriv ett �rtal: ");
  int n;
  scanf("%d", &n);
  if (ar_skottar(n)) {
    printf("Skott�r");
  }
  else {
    printf("Inte skott�r");
  }
}