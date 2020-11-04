#include <string.h>
void vand(char *s) {
  char c, *t = s+strlen(s)-1;
  for (; s<t; s++, t--) {
    // byt värde på *s och *t
    c = *s; 
    *s = *t; 
    *t = c;
  }
}

// Testprogram (ingick inte i uppgiften)
#include <stdio.h>
int main() {
  printf("Skriv en text!\n");
  char a[1000];
  scanf("%s", a);
  vand(a);
  printf("%s", a);
}