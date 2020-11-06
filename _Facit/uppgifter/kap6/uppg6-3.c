#include <stdio.h>

_Bool primtal(int talet){
  for (int k = 2; k<talet; k++)
    if (talet % k == 0)
        return 0;
  return 1;
}

int main() {
  int n;
  printf("Talet? ");
  scanf("%d", &n);
  if (primtal(n))
    printf("Primtal\n");
  else
    printf("Ej primtal\n");
}
