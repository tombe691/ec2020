#include <stdio.h>
#define ANTAL_KOLUMNER 4

_Bool symmetrisk(int m[][ANTAL_KOLUMNER], int antal_rader ) {
  if (antal_rader != ANTAL_KOLUMNER)
    return 0;
   for (int i=0; i<ANTAL_KOLUMNER; i++)   
     for (int j=0; j<ANTAL_KOLUMNER; j++)
       if (m[i][j] != m[j][i])
         return 0;
    return 1;
}

int main() {
  int f[4][4];
  printf("Skriv in en 4x4 matris\n");
  for (int i=0; i<4; i++)  
    for (int j=0; j<4; j++) 
      scanf("%d", &f[i][j]); 
  if (symmetrisk(f, 4))
    printf("Matrisen är symmetrisk\n");
  else
    printf("Matrisen är inte symmetrisk\n"); 
}

