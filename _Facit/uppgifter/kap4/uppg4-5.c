#include <stdio.h>
int main() {
  printf("Vilket �r? ");
  int ar;
  scanf("%d", &ar);
  int antal = 26000;
  for (int i=2016; i<=ar; i++)
    antal += 300 - 325 + antal*(0.7-0.6)/100+0.5;    
  printf("Ber�knad befolkning %d:", antal);    
}
