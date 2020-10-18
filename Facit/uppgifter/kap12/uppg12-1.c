
struct bok {
  char titel[30];
  char forfattare[30];
  int antal_sidor;
  double pris;
};

#include <stdio.h>
int main() {
  struct bok b1 = {"Java direkt", "Jan Skansholm", 784, 483};
  struct bok b2 = {"Portugisisk-Svensk ordbok", "Alexander Fernandes", 367, 424};

  printf("%s, %s, %1d sidor, %1.2f kr\n", 
          b1.titel, b1.forfattare, b1.antal_sidor, b1.pris);
  printf("%s, %s, %1d sidor, %1.2f kr\n", 
          b2.titel, b2.forfattare, b2.antal_sidor, b2.pris);
}


