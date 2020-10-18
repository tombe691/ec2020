// Filen observation.h
_Bool observerat(int tim, int min, double temp);
double aktuell_temp(void);
int obs_tim(void);
int obs_min(void);

/////////////////////

// Filen observation.c
#include <stdio.h>
#include "observation.h"

static int t, m;
static double temperatur;

_Bool observerat(int tim, int min, double temp) {
  if (tim < 0 || tim > 23 || min < 0 || min > 59) {
    printf("Felaktig tidpunkt\n");
    return 0;
  }
  if (temp < -100 || temp > 100) {
    printf("Felaktig temperatur\n"); 
    return 0;
  }
  t = tim;
  m = min;
  temperatur = temp;
  return 1;
}
       
double aktuell_temp(void) {
  return temperatur;
}

int obs_tim(void) {
  return t;
}

int obs_min(void) {
  return m;
}

/////////////////////

// Filen main.c
#include <stdio.h>
#include "observation.h"

int main() {
  while (1) {
    printf("Vill du rapportera aktuell temperatur, skriv 1, annars 0. ");
    int rapport;
    if (scanf("%d", &rapport)!=1)
      break;
    if (rapport) {
      int t, m;
      double tmp;
      printf("Tidpunkt (tt mm)? ");
      scanf("%d%d", &t, &m); 
      printf("Temperatur? "); 
      scanf("%lf", &tmp); 
      if (!observerat(t, m, tmp))
        printf("Rapporten misslyckades\n");
    }     
    else
      printf("Klockan %02d:%02d var det %.1f grader\n", 
             obs_tim(), obs_min(), aktuell_temp());
  }
}
