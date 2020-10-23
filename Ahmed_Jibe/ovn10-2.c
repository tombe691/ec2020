#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystring.h"

int main() {
  FILE *f = open_file("Filens namn?", "r");
  int r = 0, k = 0; // antal rader och rader med kommentarer
  char s[100];
  while (fgets(s, 100, f) != NULL) {
    r++;
    if (strstr(s, "//") != NULL)
      k++;
  }
  printf("%.2f %% av raderna har kommentarer", 1.0 * k / r); // undvik heltalsdivision
}