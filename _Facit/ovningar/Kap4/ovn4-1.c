#include <stdio.h>
int main() {
  printf("n? ");
  int n;
  scanf("%d", &n);
  int sum = 0;
  int k = 1;
  while (k <= n) {
    sum = sum + k * k;
    k = k + 1;            
  }
  printf("Summan blir %d", sum); 
}
