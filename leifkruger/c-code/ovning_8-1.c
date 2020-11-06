//==============================================================================
//Description   : Övning med fält.
//Filename      : ovning_8-1.c
//Date          : 2020-10-08
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>

int main() {
  double a[] = {0, 0, 0, 0};
  int b[] = {5, 10, 20, 50, 100, 200, 500};
  
  for (int i=0; i<sizeof a/sizeof a[0]; i++)
    printf("%5.1f ", a[i]);
  printf("\n");
  for (int i=0; i<sizeof b/sizeof b[0]; i++)
    printf("%5d", b[i]);       
}