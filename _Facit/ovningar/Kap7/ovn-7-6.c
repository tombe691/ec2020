// Filen kolapp.h
int ta_lapp(void);      // ta en k�lapp
int betjana_kund(void); // betj�na en kund
void nollstall(void);   // ny dag
int betjanas(void);     // se vem som betj�nas nu

////////////////////////

// Filen kolapp.c
#include "kolapp.h"
static int sist = 0;
static int betjanad = 0;

int ta_lapp(void) {
  return ++sist;
}

int betjana_kund(void) {
static int betjanad = 0;
  if (betjanad == sist)
    return -1;           // inga kunder kvar
  else
    return ++betjanad;   // betj�na n�sta kund
}

void nollstall(void) {
  sist = 0;
  betjanad = 0;
}

int betjanas(void) {
  return betjanad;
}

////////////////////////

// Filen demo.c
#include <stdio.h>
#include "kolapp.h"

int main() {
  while(1) {
    printf("Skriv 1 om du �r kund, 0 annars: ");
    int kund;
    if (scanf("%d", &kund) != 1)
      break;
    if (kund) {
      printf("Du fick nr: %d\n", ta_lapp());
      printf("Nu betj�nas nr: %d\n", betjanas());
    }
    else {
      int nr = betjana_kund();
      if (nr > 0)
        printf("Betj�na nr: %d\n", nr);
      else
        printf("Inga kunder i k�\n");
    }
  }
}
