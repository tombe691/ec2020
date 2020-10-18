#include <stdio.h>
int main() {
  int a[100];
  for (int i=0; i<100; i++)
    a[i] = i;
  int b[20];
  for (int i=0; i<20; i++)
    b[i] = 0;
  for (int i=0; i<5; i++)
    b[i+10] = a[i+50];
  for (int i=0; i<5; i++)
    b[i+5] = a[i+95];
  for (int i=0; i<20; i++)
    printf("%5d", b[i]);   
}