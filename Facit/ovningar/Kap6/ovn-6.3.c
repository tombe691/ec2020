int antal_siffror(int tal) {
  int i = 0;
  while (tal > 0) {
    tal = tal / 10;
    i++;
  }
  return i;
}

// Denna funktion kan testas med hjälp av följande main-funktion:
#include <stdio.h>
int main() {
  int k;
  printf("Ett heltal? ");
  scanf("%d", &k);
  printf("Antal siffror: %d", antal_siffror(k));
}

