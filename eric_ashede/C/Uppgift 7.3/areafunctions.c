/******************************************************
 Name		: areafunctions.c
 Author		: Eric Åshede
 Description: Bibliotek för funktioner som räknar ut area av rektangel, cirkel och triangel.
 Date		: 2020-10-05
*******************************************************/
#include <stdio.h>
#include "areafunctions.h"
//funktion för att läsa in double 
double getDouble() {
    double x;
    scanf("%lf", &x);
    return x;
}
//funktion för rektangel
double areaRectangle() {
    printf("Enter height: ");
    double height = getDouble();
    printf("Enter length: ");
    double length = getDouble();
    double area = height * length;
    return area;
}
//funktion för cirkel
double areaCircle() {
    printf("Radius: ");
    double radius = double getDouble();
    return PI * radius * radius;
}
//funktion för triangel
double areaTriangle() {
    printf("Height: ");
    double height = double getDouble();
    printf("Length: ");
    double base = double getDouble();
    double area = height * base / 2;
    return area;
}
//Rolig funktion för att ge en klapp på axeln
void bra(char *namn){
    printf("Bra jobbat %s", namn);
}