#include <math.h>
#include "list.h"

double langd(struct list *l) {
  double d=0;
  for (int i = 0; i< size(l); i++) {
	double *p = get(l, i);
    d = d + *p * *p;
  }
  return sqrt(d);
}
