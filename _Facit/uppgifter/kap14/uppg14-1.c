#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct list *li = new_list();
  int tal;
  while ((scanf("%d", &tal) == 1)) {
    int *pi = malloc(sizeof (int));
    *pi = tal;
    add_last(li, pi);
  }
  printf("Talen är:\n");
  for (int i=0; i<size(li); i++) {
    _Bool funnen = 0;
	int *p1 = get(li, i);
    for (int j=i-1; j>=0 && !funnen; j--) {
	  int *p2 = get(li, j);
      if (*p1 == *p2)
        funnen = 1;
    }
    if (!funnen)
      printf("%d ", *p1);
  }
}

