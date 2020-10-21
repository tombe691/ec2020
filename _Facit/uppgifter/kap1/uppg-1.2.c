#include <stdio.h>
#include <stdlib.h>
int main () {
  printf("Running on ");
  printf(getenv("COMPUTERNAME"));
  printf("\n");
}