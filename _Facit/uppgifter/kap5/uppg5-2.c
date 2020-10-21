#include <stdio.h>
int main() {
  int m, n, r;
  printf("Första talet? "); 
  scanf("%d", &m);
  printf("Andra talet? "); 
  scanf("%d", &n);
  while (1) {
    r = m % n;
    if (r == 0)
      break;
    m = n;
    n = r;   
  }
  printf("Största gemensamma delare är %d", n);
}
