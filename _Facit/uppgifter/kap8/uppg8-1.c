#include <stdio.h>

int main() {
  int tab[1000];
  int antal = 0;
  while (scanf("%d", &tab[antal]) == 1)
    antal++; 

  printf("Talen är:\n");
  for (int i=0; i<antal; i++) {
    _Bool funnen = 0;
    for (int j=0; j<i && !funnen; j++) {
      if (tab[j] == tab[i])
        funnen = 1;
    }
    if (!funnen)
      printf("%d  ", tab[i]);
  }
}

