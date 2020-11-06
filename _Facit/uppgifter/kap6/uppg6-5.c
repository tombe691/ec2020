#include <stdio.h>

void skriv_tab(int tal) {
  for (int i=1; i<=10; i++) {
    printf("%3d%4d\n", i, tal*i);
  }     
}
  
int main() {
  int m;
  printf("Ett tal? "); 
  scanf("%d", &m);
  skriv_tab(m);
}
