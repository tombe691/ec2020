/*
 ============================================================
 Name		: Uppgift 7.3
 Author		: Noor Latif, noor@latif.se
 Description: Räknar ut olika areor åt användaren.
 Date		: 2020-10-07
 ============================================================
 */

#include <stdio.h>

#include "fun.h"

int main() {
    /* Chosen SI unit is then inserted into output text */
    puts("Tjolahopp! Vi ska nu räkna ut areor åt dig, först väljer du enhet.");
    printf("Skriv din SI enhet (t.ex cm): ");
    char enhet[12];
    scanf("%s", enhet);

    /* Calculate the area of a rectangle */
    printf("\n-Rektangel Area- \nAnge höjd och längd i [%s], separerat med mellanrum: ", enhet);
    /* getDouble() takes a value from the user and enters it back into the proper parameter location */
    double area = areaRectangle(getDouble(), getDouble()); /* and then the area function calculates the result */
    printf("Arean är %.1f%s\n", area, enhet);              /* notice that we print the resulting calculation appended by chosen SI unit */

    /* Calculate the area of a triangle */
    printf("\n-Triangel Area- \nAnge bas och längd i [%s], separerat med mellanrum:: ", enhet);
    double areaTriangel = areaTriangle(getDouble(), getDouble());
    printf("Arean är %.1f%s\n", areaTriangel, enhet);

    /* Beräkna arean av en Cirkel */
    printf("\n-Cirkel Area- \nAnge radien för cirkeln [%s]: ", enhet);
    double areaCirkel = areaCircle(getDouble());
    printf("Arean är %.1f%s\n", areaCirkel, enhet);

    /* Funktion för att tacka */
    kudos("Eric & Rickard");
    return 0;
}
