#include <stdio.h>
int main() {
  printf("Skriv n�got!\n");
  int n = 0, c;
  while ( (c = getchar()) != EOF )
    n++;
  printf("Du skrev %d tecken\n", n);  
}