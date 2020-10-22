#include <stdio.h>
int main() {
  printf("n? ");
  int n;
  scanf("%d", &n);
  int summa, k;
  for (summa = 0, k =1; k <= n; k = k + 1)
    summa = summa + k;  
  printf("Summan blir %d", summa); 
}
