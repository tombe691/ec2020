#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct kort {
  int farg;   
  int valor;
};

void init_kortlek(struct list *kort) {
  for (int f = 0; f < 4; f++) {
    for (int v = 1; v <= 13; v++) {
	  struct kort *p = malloc(sizeof (struct kort));
	  *p = (struct kort) {f, v};
      add_last(kort, p);
    }
  }	
}


void blanda(struct list *kort) {
   for (int i = 1; i<=100; i++) {
     int i1 = rand() % 52;
     int i2 = rand() % 52;
     struct kort *temp = get(kort, i1);
     set(kort, i1, get(kort, i2));
     set(kort, i2, temp);
   }
}
       

int main() {
  char *kortfarg[] = {"Kl ", "Ru ", "Hj ", "Sp "};
  struct list *b = new_list();
  init_kortlek(b);
  srand(time(NULL)); 
  blanda(b);
  while (1) {
    printf("Hur många kort vill du ha? ");
    int n;
    if (scanf("%d", &n) != 1 || n == 0)
      break;
    if (n <= size(b)) {
      printf("Du får korten: ");
      for (int i=1; i<=n; i++) {
		struct kort *pk = remove_first(b);
        printf("%s%d  ", kortfarg[pk->farg], pk->valor);
	  }
      printf("\n");
    }
    else
      printf("Inte så många kort kvar\n");
  }
}

