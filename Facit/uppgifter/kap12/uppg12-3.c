#include <stdio.h>

struct rat_tal {
  int tl;   // täljaren
  int nm;   // nämnaren
};

void skriv_rat_tal(const struct rat_tal *tal) {
  printf("%d/%d ", tal->tl, tal->nm);
}

int main() {
  struct rat_tal r1 = {5, 9};
  struct rat_tal r2 = {1, 3};
  struct rat_tal r3 = {7, 12};
   skriv_rat_tal(&r1);
   skriv_rat_tal(&r2);
   skriv_rat_tal(&r3);
}

