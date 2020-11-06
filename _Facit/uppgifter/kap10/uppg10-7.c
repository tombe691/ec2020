#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mystring.h"

int main() {
  FILE *f = open_file("Filens namn?", "r"); 
  char kons[] = "bcdfghjklmnpqrstvwxz";
  int c;
  while ((c = fgetc(f)) != EOF) {
    putchar(c);
    if (strchr(kons, tolower(c)) != NULL) {
        fgetc(f); fgetc(f);
    }
  }
}
  
