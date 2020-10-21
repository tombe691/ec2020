#include <stdio.h>
int main() {
  double f1[] = {0, 0, 0, 0};
  int f2[] = {5, 10, 20, 50, 100, 200, 500};
  for (int i=0; i<sizeof f1/sizeof f1[0]; i++) // hej
    printf("%5.1f", f1[i]);
  printf("\n");
  for (int i=0; i<sizeof f2/sizeof f2[0]; i++)
    printf("%5d", f2[i]);       
}
