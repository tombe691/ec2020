#include <stdio.h>
double x = 1.5;
double f(double x) {
   return x;
}

int main() {
  double y = 3.0;
  if (y>0) {
    double y = 0;
  }
  printf("%f", f(y));
}

/* 
Utskriften blir
3.000000
Det beror p� att den y som deklareras inne i if-satsen bara �r synlig d�r.
Utanf�r if-satsen �r det den variabel y som deklareras f�rst som syns.
Om man byter namn p� den f�rsta variabeln y, s� finns det i printf-satsen 
ingen synlig variabel som heter y. Man f�r d�rf�r en felutskrift.
*/