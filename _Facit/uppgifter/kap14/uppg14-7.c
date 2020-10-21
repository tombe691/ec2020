#include "list.h"

int list_search(const void *key, struct list *l, int (*compar)(const void *, const void *)) {
  int i1 = 0, i2 = size(l), m = 0;
  int cmp;
  while (i1 <= i2) {
    m = (i1 + i2)/2;   // beräkna index för mitten
    cmp = compar(key, get(l, m));
    if (cmp < 0)
       i2 = m-1;
    else if(cmp > 0)
       i1 = m+1;
    else // lika
       break;  // man hittade talet  
  }
  if (cmp == 0)
    return m;
  else
    return -1;
}

  