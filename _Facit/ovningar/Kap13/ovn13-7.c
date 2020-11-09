#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "abonnemang.h"
#include "..\mystring.h"
#define N 100

int bin_sok(struct abonnemang a[], int start, int slut, 
            char *sokt) {
  setlocale(LC_ALL, "");
  int i1 = start, i2 = slut, m = 0, jfr = -1;
  while (i1 <= i2) {
    m = (i1 + i2)/2; 
    jfr = strcoll(sokt, a[m].namn);
    if (jfr < 0)
      i2 = m-1;
    else if(jfr > 0)
      i1 = m+1;
    else // lika
      break;  // man hittade lottnumret 
  }
  int resultat;
  if (jfr == 0)
      resultat = m;
  else
      resultat = start-1;
  setlocale(LC_ALL, "C");
  return resultat;
}

int main() {
  struct abonnemang a[N];     // fält för abonnemang
  int n = 0;                  // antal abonnemang
  FILE *f = fopen("mobildata2.txt", "r");
  // Läs in data från filen
  while(fread_line(a[n].namn, ABNAMN_LANGD, f)) {
    fscanf(f, "%lf%d%lf%lf%lf", 
           &a[n].per_manad,
           &a[n].fria_min, &a[n].extra_min,
           &a[n].fria_gb, &a[n].extra_gb);
    fskip_line(f);  // hoppa över blanka i slutet på raden
    n++;   // Öka antalet typer av abonnemang med 1
  }

  // Sök abonnemang
  char sokt[ABNAMN_LANGD];
  printf("Vilket abonnemang söker du? ");
  while(read_line(sokt, ABNAMN_LANGD)) {
    int k = bin_sok(a, 0, n-1, sokt);
    if (k >= 0)  // abonnemanget hittades
      printf("Fast månadskostnad: %.2f\nAntal GB: %.2f\n", 
             a[k].per_manad, a[k].fria_gb);
    else
      printf("Kunde inte hitta %s\n", sokt);
    printf("Vilket abonnemang söker du? ");
  } 
}