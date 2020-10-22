#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "abonnemang.h"
#include "..\mystring.h"
#define N 100

void sortera(struct abonnemang a[], int start,int slut) {
  setlocale(LC_ALL, "");
  for (int k=start; k < slut; k++) {
    // Sök det minsta bland elementen nr k till slut
    int m = k;   // index för hittills minsta värde
    for (int i=k; i<=slut; i++) {
      if (strcoll(a[i].namn, a[m].namn) < 0)
        m = i; // nytt minsta värde funnet
    }
    // Låt elementen nr k och m byta plats
    struct abonnemang temp = a[k];
    a[k] = a[m];
    a[m] = temp;
  }
  setlocale(LC_ALL, "C");
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
  sortera(a, 0, n-1);
  // Skriv ut det sorterade fältet
  FILE *fut = fopen("mobildata2.txt", "w");
  for (int i=0; i<n; i++)
    fprintf(fut, "%s\n%.2f %d %.2f %.2f %.2f\n", a[i].namn, a[i].per_manad, 
            a[i].fria_min, a[i].extra_min, a[i].fria_gb, a[i].extra_gb);
}
