// Filen mylib.h

void new_lines(int);
double read_double(void);
int read_int(void);


////////////////////////

// Filen mylib.c

#include "mylib.h"
 
void new_lines(int n) {
 for (int i=1; i<=n; i++)
   printf("\n");
}

double read_double(void) {
  double x;
  scanf("%lf", &x);
  return x;
}

int read_int(void) {
  int i;
  scanf("%d", &i);
  return i;
}
