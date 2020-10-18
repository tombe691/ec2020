  #include <string.h>
  #include <locale.h>
  #include "person.h"
  
  int jfr_namn (char *f1, char *e1, char *f2, char *e2) {
    if (strcoll(e1, e2) < 0 ||
        (strcoll(e1, e2) == 0 && strcoll(f1, f2) < 0))
      return -1;
    else if (strcoll(e1, e2) > 0 ||
        (strcoll(e1, e2) == 0 && strcoll(f1, f2) > 0))
      return 1;
    else
      return 0;
  }
  
  int bin_sok(struct person  a[], int start, int slut, char *soktFornamn, char *SoktEfternamn) {
  setlocale(LC_ALL, "");   // Lokal (svensk) standard
  int i1 = start, i2 = slut, m = 0, j = -1;
  while (i1 <= i2) {
    m = (i1 + i2)/2;   // beräkna index för mitten
    j = jfr_namn(soktFornamn, SoktEfternamn, a[m].fornamn, a[m].efternamn);
    if (j < 0)
       i2 = m-1;
    else if (j > 0)
       i1 = m+1;
    else // lika
       break;  // man hittade namnet  
  }
  int resultat;
  if (j == 0)
    resultat = m;
  else
    resultat = start-1;
  setlocale(LC_ALL, "C");  // Återgå till C:s standard
  return resultat;
}

// Testprogram. Ingick inte i uppgiften
  #include <stdio.h>
  #include "mystring.h"
  
int main() {
  struct person v[1000];
  // Läs in information från filen personer2.txt
  int n = 0;    // antal personer
  FILE *fin = fopen("personer2a.txt", "r");
  int sing;
  while (fscanf(fin, "%s%s%d%d", v[n].fornamn, v[n].efternamn, &v[n].fodd_ar, &sing) == 4) { 
    v[n].singel = sing;
     n++;    // ett varv per rad i filen
     fskip_line(fin);
  }
  // Fråga efter namn
  printf("Namn? ");
  char fn[PNAMN_LANGD], en[PNAMN_LANGD];
  while (scanf("%s%s", fn, en) == 2) {
    int k = bin_sok(v, 0, n-1, fn, en);
    if (k >= 0)
         printf("Född: %d\n", v[k].fodd_ar);
    else 
        printf("Fanns inte\n");
    printf("Namn? ");
  } 
}
 