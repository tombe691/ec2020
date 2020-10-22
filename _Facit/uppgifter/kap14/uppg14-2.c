#include <stdio.h>
#include <stdlib.h>
#include "list.h"

_Bool ar_sorterat(struct list *l) {
  for (int i=1; i < size(l); i++) {
	double *d1 = get(l, i), *d2 = get(l, i-1);
    if (*d1 < *d2) 
      return 0;
  }
  return 1;
}

int main() {
  struct list *ld = new_list();
  double tal;
  while ((scanf("%lf", &tal) == 1)) {
    double *pd = malloc(sizeof (double));
    *pd = tal;
    add_last(ld, pd);
  } 
  if (ar_sorterat(ld))
    printf("Listan är sorterad");
  else
    printf("Listan är inte sorterad");
}  
    
      
    

