#include <stdio.h>
#include <string.h>

int main() {
  char nr1[15], nr2[15];
  printf("Personnumer f�r den f�rsta personen? ");
  fgets(nr1, 15, stdin);
  printf("Personnumer f�r den andra personen?  ");
  fgets(nr2, 15, stdin);
  if (strncmp(nr1+2, nr2+2, 4) == 0)
    printf("Samma f�delsedag");
  else
    printf("Olika f�delsedag");
}
 