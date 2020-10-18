#include "list.h"

void list_sort(struct list *l, int (*compar)(const void *, const void *)) {
  for (int k=0; k<size(l); k++) {
    // Sök det minsta bland elementen nr k till slut
    int m = k;   // index för hittills minsta värde
    for (int i=k+1; i<size(l); i++) {
	  int cmp = compar(get(l, i), get(l, m));
      if (cmp < 0) 
        m = i; // nytt minsta värde funnet
    }
    // Låt elementen nr k och m byta plats
    double *ptemp = get(l, k);
	set(l, k, get(l, m));
	set(l, m, ptemp);
  }
}

int jfr_double(const void *x, const void *y) {
  const double *a = x, *b = y;
  if (*a < *b)
    return -1;
  else if (*a > *b)
	return 1;
  else 
	return 0;
}

//Testprogram
#include <stdio.h>
#include <stdlib.h>
int main() {
  struct list *ld = new_list();
  double tal;
  while ((scanf("%lf", &tal) == 1)) {
    double *pd = malloc(sizeof (double));
    *pd = tal;
    add_last(ld, pd);
  } 
  
  list_sort(ld, jfr_double);
  for (int i=0; i<size(ld); i++) {
    double *d = get(ld, i);
    printf("%f ", *d);
  }
  double x = 5;
  printf("\n%d\n", list_search(&x, ld, jfr_double));
}

  