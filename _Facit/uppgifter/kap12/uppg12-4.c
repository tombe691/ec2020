#include <stdio.h>

struct rat_tal {
  int tl;   // täljaren
  int nm;   // nämaren
};

void skriv_rat_tal(const struct rat_tal *tal) {
  printf("%d/%d ", tal->tl, tal->nm);
}

void foerenkla (struct rat_tal *tal) {
    int m = tal->tl; 
    int n = tal->nm;
    int r;
    while (1) {
      r = m % n;
      if (r == 0)
        break;
      m = n;
      n = r;   
    }
    // största gemensamma delare finns nu i n
    tal->tl = tal->tl / n;
    tal->nm = tal->nm / n;
  }

int main() {
  struct rat_tal r4 = {5, 15};
  struct rat_tal r5 = {8, 12};
   skriv_rat_tal(&r4);
   foerenkla(&r4);
   skriv_rat_tal(&r4);
   printf("\n");
   skriv_rat_tal(&r5);
   foerenkla(&r5);
   skriv_rat_tal(&r5);
}

    
