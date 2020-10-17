#include <stdio.h>
#include "mystring.h"    // innehåller open_file
int main() {
  FILE *f = open_file("Filens namn?", "r");
  int c;
  while ((c = fgetc(f)) != EOF) {
    if (c == '\t') 
	  printf("   ");
    else
      putchar(c);
  }
}
              