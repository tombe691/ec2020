// Filen area.h

#define PI 3.141592653589793

double area_rekt(double b, double h);
double area_cirk(double r); 
double area_triang(double b, double h);

///////////////////////////

// Filen area.c
#include "area.h"

double area_rekt(double b, double h) {
  return b*h;
}

double area_cirk(double r) {
  return PI * r * r;
}

double area_triang(double b, double h) {
  return b * h / 2;
}



