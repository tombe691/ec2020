#include "mystring.h"

void skip_line(void) {
  fskip_line(stdin); 
}

 _Bool read_line(char *a, int n) {
  return fread_line(a, n, stdin);
}
 