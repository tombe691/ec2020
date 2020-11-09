#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct list *l = new_list();
  double tal, *p;
  while ((scanf("%lf", &tal) == 1)) {
    p = malloc(sizeof (double));
    *p = tal;
    add_last(l, p);
  }
  p = get(l, 0);        // avl�s det f�rsta elementet
  double max = *p;      // st�rsta talet hittills
  int imax = 0;         // index f�r st�rsta talet
  // Unders�k resten av elementen
  for (int i = 1; i < size(l); i++) {
	p = get(l, i);
    if (*p > max) {
	  max = *p;
      imax = i;
	}
  }
  printf("St�rsta tal: %f\nIndex: %d", max, imax);
}