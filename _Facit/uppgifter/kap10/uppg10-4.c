#include <stdio.h>
#include "mystring.h"    
int main() {
  FILE *infil = open_file("Den befintliga filens namn:", "r");
  FILE *utfil = open_file("Den nya filens namn:", "w");
  char rad1[100], rad2[100];
  while (fread_line(rad1, 100, infil)) {
    fread_line(rad2, 100, infil);
    int alder, langd;
    double vikt, bmi;
    sscanf(rad2, "%d%d%lf", &alder, &langd, &vikt);
    bmi = vikt / (0.01*langd*0.01*langd);
    if (bmi > 30)
      fprintf(utfil, "%s\n%s\n", rad1, rad2);
  }
  fclose(utfil);
}
      
