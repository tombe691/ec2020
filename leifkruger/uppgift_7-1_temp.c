//==============================================================================
//Description   : Definitionsfil för funktionsbibliotek temperatur.
//Filename      : uppgift_7-1_temp.c
//Date          : 2020-10-06
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#include "uppgift_7-1_temp.h"

static double temperatur;
static int timmar, minuter;

_Bool observation(double t, int h, int m) {
   //Testa om gilltiga värden
   if (t > -30 && t < 35 && h > 0 && h < 24 && m > 0 && m < 60) {
   temperatur = t;
   timmar = h;
   minuter = m;
   return 1; //Returnera sant om temperatur, timmar och minuter är gilltiga
   }
   else {
   return 0;
   }
}

double aktuell_temp() {
   double t = temperatur;
   return t;
}

int obs_tim() {
   int h = timmar;
   return h;
}

int obs_min() {
   int m = minuter;
   return m;
}
