 /*
 ============================================================
 Name		: Uppgift 7.3
 Author		: Noor Latif
 Description: Räknar ut olika areor åt användaren.
 Date		: 2020-10-07
 ============================================================
 */

#include <stdio.h>
#include "fun.h"

int main(){
	/* Vald enhet matas sedan in i alla relevanta kodrader */
	puts("Hej latmask! Vi ska nu räkna ut areor åt dig, först väljer du enhet.");
	printf("SI Enhet: ");
	char enhet[12];
	scanf("%s", enhet);

	/* Beräkna arean av en rektangel */
	printf("\n-Rektangel Area- \nAnge höjd och längd [%s]: ", enhet);
	/* getDouble() takes a value from the user and enters it back into the proper parameter location */
	double area = areaRectangle(getDouble(), getDouble()); /* and then the area function calculates the result */
	printf("Arean är %.1f%s\n", area, enhet); /* notice that we print the resulting calculation appended by chosen SI unit */

	/* Beräkna arean av en triangel */
	printf("\n-Triangel Area- \nAnge bas och längd [%s]: ", enhet);
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
