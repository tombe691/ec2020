#include <stdio.h>
#include <string.h>

int main() {
  char nr1[15], nr2[15];
  printf("Personnumer för den första personen? ");
  fgets(nr1, 15, stdin);
  printf("Personnumer för den andra personen?  ");
  fgets(nr2, 15, stdin);
  if (strncmp(nr1+2, nr2+2, 4) == 0)
    printf("Samma födelsedag");
  else
    printf("Olika födelsedag");
}
 