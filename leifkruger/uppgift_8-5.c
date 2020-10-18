//==============================================================================
//Description   : Definitionsfil för funktion till uppgift 8.5.
//                1. Summa av element. 2. Summa av kvadrat av element.
//Filename      : uppgift_8-5.c
//Date          : 2020-10-10
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#include "uppgift_8-5.h"

double sum(double a[], int n) {
   double sum = 0; //Lokalvariabel
   //Summa av element i ett fält
   for (int i=0; i < n; i++)
      sum += a[i];
   return sum; //Returnera summan
}

double kvad_sum(double a[], int n) {
   double kvad_sum = 0;  //Lokalvariabel
   //Summa av kvadrat av element i ett fält
   for (int i=0; i < n; i++)
      kvad_sum += a[i] * a[i];
   return kvad_sum; //Returnera kvadrat summering
}