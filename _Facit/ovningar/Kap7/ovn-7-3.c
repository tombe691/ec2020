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
Det beror på att den y som deklareras inne i if-satsen bara är synlig där.
Utanför if-satsen är det den variabel y som deklareras först som syns.
Om man byter namn på den första variabeln y, så finns det i printf-satsen 
ingen synlig variabel som heter y. Man får därför en felutskrift.
*/