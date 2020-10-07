/*
______________________________________________________________________________________
Date        : 2020-10-05
File        : uppgift7.3.c
Description : Göra funktioner och lägga in för bibliotek
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include <stdio.h>
#include "area.h"
int main()
{
  //Area för rektangel
  double base, height, areaForRektangle;
  printf("Vad ar basen pa rektangeln? ");
  scanf("%lf", &base);
  printf("Vad ar hojden for rektangeln? ");
  scanf("%lf", &height);
  //Anrop av funktion
  areaForRektangle = getAreaRektangle (base, height);
  printf("Arean for rektangeln ar: %.0f", areaForRektangle);
  printf("\n");
  //Area för Cirkel
  double radie, areaForCirkle;
  printf("Vad ar radien pa cirkeln? ");
  scanf("%lf", &radie);
  //Anrop av funktion
  areaForCirkle = getAreaCirkle (radie);
  printf("Arean for cirkeln ar: %.0f", areaForCirkle);
  printf("\n");
  //Area för Triangel
  double bas, hojd, areaForTriangle;
  printf("Vad ar basen pa Triangle? ");
  scanf("%lf", &bas);
  printf("Vad ar hojden for Triangle? ");
  scanf("%lf", &hojd);
  //Anrop av funktion
  areaForTriangle = getAreaTriangle (bas, hojd);
  printf("Arean for rektangeln ar: %.0f", areaForTriangle);
  return 0;