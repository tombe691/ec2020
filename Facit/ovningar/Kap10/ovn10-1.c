#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *f = fopen("personer.txt", "a"); 
  if (f == NULL) {
    printf("Kan inte hitta filen");
    exit(1);
  }  
  char s[100];
  printf("? ");
  while (fgets(s, 100, stdin) != NULL) {
    fputs(s, f);
    printf("? ");
  }
  fclose(f);
} 