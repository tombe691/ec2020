void strcat(char *till, const char *fran) {
  while(*till)  // sök nolltecknet
    till++;
  while (*till++ = *fran++)  // kopiera
    ;
}


// Testprogram, ingick inte i uppgiften
#include <stdio.h>
int main() {
char s[] = "Hej ";
strcat(s, "David");
printf("%s", s);
}