#include <stdio.h>
#include <string.h>
#include "mystring.h"
    
int main() {
  char rad[100], txt[100];
  FILE *infil = open_file("Den befintliga filens namn:", "r");
  FILE *utfil = open_file("Den nya filens namn:", "w");
  printf("Vilken text söker du?");
  read_line(txt, 100);
  while (fread_line(rad, 100, infil)) {
    if (strstr(rad, txt) != NULL)
      fprintf(utfil, "%s\n", rad);
  }
  fclose(utfil);
}
          