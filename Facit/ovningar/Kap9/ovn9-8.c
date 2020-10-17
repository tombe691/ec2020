#include <string.h>

int last_index_of(const char *s, char c) { 
  char *p = strrchr(s, c);
  if (p == NULL)
    return -1;
  else 
    return p-s;
}