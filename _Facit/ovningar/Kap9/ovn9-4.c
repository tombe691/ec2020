#include <stdio.h>
#include <ctype.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "");
  printf("Skriv ett tecken: ");
  char teck = getchar();
  if (isdigit(teck))
    printf("Det �r en siffra\n"); 
  if (islower(teck)) {
    printf("Det �r en liten bokstav\n");
    printf("Motsvarande stora bokstav �r: %c\n",
           toupper(teck));
  }
}