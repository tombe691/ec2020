#include <stdio.h>
#include "person.h"

void las_person(struct person *q) {
  printf("F�rnamn? ");
  scanf("%s", q->fornamn);
  printf("Efternamn? ");
  scanf("%s", q->efternamn);
  printf("F�delse�r? ");
  scanf("%d", &q->fodd_ar);
  printf("Singel? ");
  char svar[10]; 
  scanf("%s", svar);
  if (svar[0] == 'j' || svar[0] == 'J')
    q->singel = 1;
  else
    q->singel = 0;
    
}

void skriv_person(const struct person *q) {
  printf("%s %s, f�dd �r %d, �r ", q->fornamn, q->efternamn, q->fodd_ar);
  if (q->singel)
    printf("singel"); 
  else 
    printf("inte singel");  
}

int main() {
  struct person p;
  las_person(&p);
  skriv_person(&p);
}