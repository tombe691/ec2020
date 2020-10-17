#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
     fprintf(stderr, "Fel antal argument\n");
     exit(1);
  }
  FILE *f = fopen(argv[1], "a");  // försök öppna infilen
   if (f == NULL) {
     fprintf(stderr, "Kan ej hitta filen %s\n", argv[1]);
     exit(2);
  } 
  char s[100];
  printf("? ");
  while (fgets(s, 100, stdin) != NULL) {
    fputs(s, f);
    printf("? ");
  }
  fclose(f);
} 