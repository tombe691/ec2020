#include <stdio.h>
#include "mystring.h"    // innehåller open_file
int main() {
  FILE *f = open_file("Filens namn?", "r");
  double temp, max = - 273, sum = 0;
  int n = 0;
  while (fscanf(f, "%lf", &temp) == 1) {
	n++;
    sum = sum + temp;
	if (temp > max)
	  max = temp;
  }
  printf("Maxtemperatur: %1.2f\nMedeltemperatur %1.2f\n", max, sum/n); 
}
	