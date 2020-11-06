//==============================================================================
//Description   : Övning med fält och utskrift.
//Filename      : ovning_8-2.c
//Date          : 2020-10-08
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>

int main() {
  const int N = 10;
  double a[N];
  for (int i=1; i<N+1; i++)
    a[i-1] = i/N; 
  for (int i=0; i<N; i++)
    printf("%5.6f ", a[i]);      
}