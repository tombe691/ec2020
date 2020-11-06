#include <ctype.h>

void remove_white(char *to, const char *from) {
  int j = 0;
  for (int i =0; from[i] != '\0'; i++)
    if (!isspace(from[i]))
      to[j++] = from[i];
   to[j] = '\0'; 
}  
