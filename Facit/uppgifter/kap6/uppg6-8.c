#include <stdio.h>

_Bool perfekt(int i){
  int sum=0;
  for (int k=1; k<i; k++)
    if (i % k == 0)
      sum += k;
  return i > 0 && sum == i;
}

int main() {
  int m;
  printf("Ett tal? "); 
  scanf("%d", &m);
  if (perfekt(m))
    printf("Perfekt");
  else
    printf("Inte perfekt"); 
}
