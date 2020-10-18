#include <stdio.h>
#define N 100

double medelv(double a[], int n) {
  double sum = 0;
  for (int i=0; i<n; i++)
    sum += a[i];
  return sum / n;
}  

int sok_minsta(double a[], int forst, int sist) {
  int m = forst;           // index för hittills minsta värde
  for (int i=forst+1; i<sist; i++) {
    if (a[i] < a[m]) 
      m = i; // nytt minsta värde funnet
  }
  return m;
}

int main() {
  double pris[N];     // fält för priser
  int n = 0;          // räknare för antal typer av kort
  // Läs in priser
  while(n < N) {
    printf("Pris/min för kort nr %d? ", n+1); 
    if (scanf("%lf", &pris[n]) != 1)
      break;
    n++;   // öka antalet typer av kort med 1
  }
  // Beräkna det lägsta priset
  int billigast = sok_minsta(pris, 0, n-1);   // index för billigaste
  printf("\nKort nr %d är billigast.\n", billigast+1);
  printf("Kostnad: %4.2f kr/minut", pris[billigast]);
  printf("\nMedelvärde för priser: %1.2f\n", medelv(pris, n));
}