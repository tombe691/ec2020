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
  FILE *f = fopen("mobildata.txt", "r");
  // Läs in data från filen
  while(fread_line(a[n].namn, ABNAMN_LANGD, f)) {
    fscanf(f, "%lf%d%lf%lf%lf", 
           &a[n].per_manad,
           &a[n].fria_min, &a[n].extra_min,
           &a[n].fria_gb, &a[n].extra_gb);
    fskip_line(f);  // hoppa över blanka i slutet på raden
    n++;   // öka antalet typer av abonnemang med 1
  }
  setlocale(LC_ALL, ""); 
  qsort(a, n, sizeof (struct abonnemang), jfr_abonnemang);
  setlocale(LC_ALL, "C");  
  // Skriv ut det sorterade fältet
  FILE *fut = fopen("mobildata2.txt", "w");
  for (int i=0; i<n; i++)
    fprintf(fut, "%s\n%.2f %d %.2f %.2f %.2f\n", a[i].namn, a[i].per_manad, 
            a[i].fria_min, a[i].extra_min, a[i].fria_gb, a[i].extra_gb);
}
