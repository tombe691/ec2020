#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mystring.h"
#define N 100

int main() {
  char f_namn[N], rad[N];
  printf("Vad heter filen med namn? ");
  read_line(f_namn, N);
  FILE *f = fopen(f_namn, "r"); 
  if (f == NULL) {
    printf("Kan inte öppna filen %s", f_namn);
    exit(1);
  } 
  int n = 0;
  while(fread_line(rad, N, f))
      n++;
  fclose(f); 
  f = fopen(f_namn, "r");
  srand(time(NULL));
  int k = rand() % n;  // // 0 <= k < n
  n = -1;
  do {
     fread_line(rad, N, f); 
     n++;     
  } while (n < k);
  printf("%s\n", rad);
}
  
  
