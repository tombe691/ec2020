#include <stdio.h>
int main() {
  printf("H�jd? ");
  double h;
  scanf("%lf", &h);
  int i=0;
  while (h > 0.01) {
    h = h * 0.7;
    i= i + 1;
  }
  printf("Den studsar %d g�nger\n", i); 
}
