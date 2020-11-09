#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"     // innehåller read_line
#define N 100

int main() {
  char f_namn[N];
  printf("Filens namn? ");
  read_line(f_namn, N);
  FILE *f = fopen(f_namn, "r"); 
  if (f == NULL) {
    printf("Kan inte öppna filen %s", f_namn);
    exit(1);
  }
  char t_namn[N];
  tmpnam(t_namn);  
  FILE *t = fopen(t_namn, "w");
    int c;
  while ((c = fgetc(f)) != EOF) {
    if (c == '\t') 
      fprintf(t, "   ");
    else 
      fputc(c, t);
  }
  freopen(f_namn, "w", f);
  freopen(t_namn, "r", t);  
  while ((c = fgetc(t)) != EOF) 
    fputc(c, f);           // kopiera tillbaka 
  fclose(f); fclose(t);
  remove(t_namn);
}  
