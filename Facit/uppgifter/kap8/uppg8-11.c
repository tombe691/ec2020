#include <stdio.h> 

void nollstall(int a[]) {
  for (int i = 0; i<9; i++)
    a[i] = 0;
}

_Bool ok(int a[]) {
  for (int i = 0; i<9; i++)
    if (a[i] != 1)
      return 0;
  return 1;
}  

_Bool solved(int a[][9]) {
  int antal[9];

  // Räkna siffrorna på raderna
  for (int i=0; i < 9; i++) {
    nollstall(antal);
    for (int j=0; j < 9; j++) {
      int k = a[i][j];
      if (k>=1 && k<=9)
        antal[k-1]++;          
    }
    if (!ok(antal))
      return 0;
  }
    
  // Räkna siffrorna i kolumnerna
  for (int j=0; j < 9; j++) {
    nollstall(antal);
    for (int i=0; i < 9; i++) {
      int k = a[i][j];
      if (k>=1 && k<=9)
        antal[k-1]++;
    }
    if (!ok(antal))
      return 0;
  }
         
  // Räkna siffrorna i regionerna
  for (int m=0; m < 3; m++) {
    for (int n=0; n < 3; n++) {
      // Undersök region m X n 
      nollstall(antal);      
      for (int i=m*3; i < (m+1)*3; i++) {
        for (int j=n*3; j < (n+1)*3; j++) {
          int k = a[i][j];            
          if (k>=1 && k<=9)
            antal[k-1]++;
        }
      }
      if (!ok(antal))
      return 0;
    }
  }
  return 1;
}

// Testprogram, ingick inte i uppgiften

int main() {
  int f[9][9];
  printf("Skriv in en Sudokulösning\n");
  for (int i=0; i<9; i++)  
    for (int j=0; j<9; j++) 
      scanf("%d", &f[i][j]); 
  if (solved(f))
    printf("Lösningen är korrekt\n");
  else
    printf("Lösningen är felaktig\n"); 
}

/* 
Här kommer en korrekt lösning att testa med:

4 8 3 9 2 1 6 5 7
9 6 7 3 4 5 8 2 1
2 5 1 8 7 6 4 9 3
5 4 8 1 3 2 9 7 6
7 2 9 5 6 4 1 3 8
1 3 6 7 9 8 2 4 5
3 7 2 6 8 9 5 1 4
8 1 4 2 5 3 7 6 9
6 9 5 4 1 7 3 8 2

*/
  