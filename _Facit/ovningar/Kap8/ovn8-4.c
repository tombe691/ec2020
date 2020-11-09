#include <stdio.h>
int main() {
  int n = 0;          // r�knare f�r antal typer av kort
  int billigast = 1;  // index f�r billigaste
  double lagstPris = 1000;   // ett orimligt h�gt pris
  // L�s in priser
  while(1) {
    n++; // �ka antalet typer av kort med 1
    double pris;
    printf("Pris/min f�r kort nr %d? ", n); 
    if (scanf("%lf", &pris) != 1)
      break;
    if (pris < lagstPris) {
      billigast = n; // nytt l�gsta pris funnet
      lagstPris = pris;
    }   
  }
  printf("\nKort nr %d �r billigast.\n", billigast);
  printf("Kostnad: %4.2f kr/minut", lagstPris);
}

