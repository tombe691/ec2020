#include <stdio.h>
int main() {
  printf("Skriv n�got!\n");
  int n = 0, c;
  while ( (c = getchar()) != EOF ) {
    if (c == '\n')
      n++;
  }
  printf("Du skrev %d rader\n", n);  
}