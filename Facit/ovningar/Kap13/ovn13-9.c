#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include "abonnemang.h"
#include "..\mystring.h"
#define N 100

int jfr_abonnemang(const void *p1, const void *p2) { 
   const struct abonnemang *q1=p1, *q2=p2;
   return strcoll(q1->namn, q2->namn); 
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
    setlocale(LC_ALL, ""); 
    struct abonnemang *p = bsearch(&sokt, a, n, 
                sizeof (struct abonnemang), jfr_abonnemang);
    setlocale(LC_ALL, "C");  
    if (p != NULL)  // abonnemanget hittades
      printf("Fast månadskostnad: %.2f\nAntal GB: %.2f\n", 
             p->per_manad, p->fria_gb);
    else
      printf("Kunde inte hitta %s\n", sokt);
    printf("Vilket abonnemang söker du? ");
  } 
}