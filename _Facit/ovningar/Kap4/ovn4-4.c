#include <stdio.h>
int main() {
  while (1) {
    printf("Vilken h�jd, skriv ett negativt v�rdet f�r att sluta? ");
    double h;
    scanf("%lf", &h);
    if (h < 0)
      break;
    int i=0;
    while (h > 0.01) {
      h = h * 0.7;
      i= i + 1;
    }
    printf("Den studsar %d g�nger\n", i);
  } 
}
