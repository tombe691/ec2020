#include <stdio.h>
#define N 100

double medelv(double a[], int n) {
  double sum = 0;
  for (int i=0; i<n; i++)
    sum += a[i];
  return sum / n;
}  

int sok_minsta(double a[], int forst, int sist) {
  int m = forst;           // index f�r hittills minsta v�rde
  for (int i=forst+1; i<sist; i++) {
    if (a[i] < a[m]) 
      m = i; // nytt minsta v�rde funnet
  }
  return m;
}

int main() {
  double pris[N];     // f�lt f�r priser
  int n = 0;          // r�knare f�r antal typer av kort
  // L�s in priser
  while(n < N) {
    printf("Pris/min f�r kort nr %d? ", n+1); 
    if (scanf("%lf", &pris[n]) != 1)
      break;
    n++;   // �ka antalet typer av kort med 1
  }
  // Ber�kna det l�gsta priset
  int billigast = sok_minsta(pris, 0, n-1);   // index f�r billigaste
  printf("\nKort nr %d �r billigast.\n", billigast+1);
  printf("Kostnad: %4.2f kr/minut", pris[billigast]);
  printf("\nMedelv�rde f�r priser: %1.2f\n", medelv(pris, n));
}