#include <stdio.h>
#include <ctype.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "");
  printf("Skriv ett tecken: ");
  char teck = getchar();
  if (isdigit(teck))
    printf("Det är en siffra\n"); 
  if (islower(teck)) {
    printf("Det är en liten bokstav\n");
    printf("Motsvarande stora bokstav är: %c\n",
           toupper(teck));
  }
}