#include <stdio.h>
int main() {
  int n = 0;          // räknare för antal typer av kort
  int billigast = 1;  // index för billigaste
  double lagstPris = 1000;   // ett orimligt högt pris
  // Läs in priser
  while(1) {
    n++; // öka antalet typer av kort med 1
    double pris;
    printf("Pris/min för kort nr %d? ", n); 
    if (scanf("%lf", &pris) != 1)
      break;
    if (pris < lagstPris) {
      billigast = n; // nytt lägsta pris funnet
      lagstPris = pris;
    }   
  }
  printf("\nKort nr %d är billigast.\n", billigast);
  printf("Kostnad: %4.2f kr/minut", lagstPris);
}

