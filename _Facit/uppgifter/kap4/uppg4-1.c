#include <stdio.h>
#include <limits.h>
int main() {
  int storsta = INT_MIN; 
  int minsta  = INT_MAX;
  int tal; 
  while (1) {
    printf("Skriv ett heltal, markera EOF f�r att sluta: ");
    if (scanf("%d", &tal) != 1)
      break;
    if (tal > storsta)
      storsta = tal;
    if (tal < minsta)
      minsta = tal;
  }
  printf("Minsta:  %d\nSt�rsta: %d", minsta, storsta);
}
