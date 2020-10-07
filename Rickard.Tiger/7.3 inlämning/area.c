/*
______________________________________________________________________________________
Date        : 2020-10-05
File        : uppgift7.3.c
Description : Göra funktioner och lägga in för bibliotek
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include "area.h"
//Funktion för uträkning av area på rektangel.
double getAreaRektangle(double bas, double hojd)
{
    return bas*hojd;
}
//Funktion uträkning av cirkel
double getAreaCirkle(double radie)
{
    return PI*radie*radie;
}
//Funktion uträkning av Triangel
double getAreaTriangle(double base, double hojd)
{
    return base*hojd/2;
}