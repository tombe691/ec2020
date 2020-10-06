//==============================================================================
//Description   : Definitionsfil för funktionsbibliotek area.
//Filename      : uppgift_7-2.c
//Date          : 2020-10-06
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include "uppgift_7-2.h"

double areaRektangel(double b, double h) {
  return b*h;
}

double areaCirkel(double r) {
  return PI * r * r;
}

double areaTriangel(double b, double h) {
  return b * h / 2;
}
