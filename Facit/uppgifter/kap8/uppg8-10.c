#include <stdio.h>
#define ANTAL_KOLUMNER 4

_Bool magisk(int m[][ANTAL_KOLUMNER], int antal_rader ) {
  if (antal_rader != ANTAL_KOLUMNER)
    return 0;
  // kontrollera radlängderna och diagonalsummorna
  int diagonal1 = 0, diagonal2 = 0;
  for (int i=0; i< antal_rader; i++) {
      diagonal1 = diagonal1 + m[i][i];
      diagonal2 = diagonal2 + m[i][4-i-1];
    }
    if (diagonal1 != diagonal2)
      return 0;

  // kontrollera radsummorna   
  for (int i=0; i<antal_rader; i++) {
    int radsum = 0;
    for (int j=0; j<ANTAL_KOLUMNER; j++) 
      radsum = radsum + m[i][j];
    if (radsum != diagonal1)
      return 0;
  }

  // kontrollera kolumnsummorna  
  for (int j=0; j<ANTAL_KOLUMNER; j++) {
    int kolsum = 0;
    for (int i=0; i<antal_rader; i++) 
      kolsum = kolsum + m[i][j];
    if (kolsum != diagonal1)
      return 0;
  }
    return 1;
}


int main() {
  int f[4][4];
  printf("Skriv in en 4x4 matris\n");
  for (int i=0; i<4; i++)  
    for (int j=0; j<4; j++) 
      scanf("%d", &f[i][j]); 
  if (magisk(f, 4))
    printf("Matrisen är magisk\n");
  else
    printf("Matrisen är inte magisk\n"); 
}


