#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define PNAMN_LANGD 30
struct person {
  char fornamn[PNAMN_LANGD];
  char efternamn[PNAMN_LANGD];
  int fodd_ar;
  struct person *partner;
  struct list *barn;
};

void nytt_barn(struct person *pp, struct person *pbarn) {
  add_last(pp->barn, pbarn);
}

int antal_barn(struct person *pp) {
  return size(pp->barn);
}

void skriv_barn(struct person *pp) {
  for (int i=0; i<size(pp->barn); i++) 
    printf("%s\n", (char *) get(pp->barn, i));
}

// Testprogram
#include <stdio.h>
#include <stdlib.h>
int main() {
  struct person p1 = {"Anders", "Lund", 1968, NULL, new_list()};
  struct person p2 = {"Eva", "Johansson", 1970, NULL, new_list()}; 
  struct person p3 = {"Ida", "Lund", 2001, NULL, new_list()};
  struct person p4 = {"Oscar", "Lund", 2003, NULL, new_list()};
  struct person p5 = {"Lina", "Johansson", 2004, NULL, new_list()};
  nytt_barn(&p1, &p3);
  nytt_barn(&p1, &p4);
  nytt_barn(&p2, &p5);
  skriv_barn(&p1);
  printf("\n");
  skriv_barn(&p2);
}  
    
      
    

