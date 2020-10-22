#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mystring.h"

int main() {
  FILE *f = open_file("Filens namn?", "r"); 
  char rad[500];
  int n=0, c;
  _Bool tom = 1;
  while ((c = fgetc(f)) != EOF) {
    if (c == '\n') {
      rad[n] = '\0';
      if (!tom)
        printf("%s\n", rad);
      n=0;
      tom = 1;
    }
    else {
      rad[n++] = c;
      if (!isblank(c))
        tom = 0;
    }
  }
}
