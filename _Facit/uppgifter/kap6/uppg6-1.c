#include <stdio.h>

int tecken(int tal) {
  if (tal>0)
    return 1;
  else if (tal == 0)
    return 0;
  else
    return -1;
}
  
int main() {
  int m;
  printf("Ett tal? "); 
  scanf("%d", &m);
  printf("Talets tecken är %d", tecken(m));
}
