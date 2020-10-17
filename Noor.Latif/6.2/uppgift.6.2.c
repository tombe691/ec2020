 /*=================================================================
||	Name		: uppgift 6.2.c										
||	Author		: Noor Latif, noor@latif.se							
||	Date		: 2020-10-03										
||__________________________________________________________________
||	C Embedded	: EC Utbildning										
||	Handledare	: Tomas Berggren									
 `================================================================*/
/* Program Description:
Programmet räknar ut priset inklusive moms för en vara när vi endast 
har 2 parametrar: (priset exkl. moms) OCH (momssatsen).
*/
#include <stdio.h>

float fun_prisMoms(float prisExklMoms, float momsProcent); //Funktionen för momsaddering.

int main() {
	printf("Hej %s! Välkommen till världens bästa kassa!\n(^ Skriven med en gnutta storhetsvansinne ^)\n\n", getenv("USERNAME"));
	while(-1) {
	float prisExklMoms, momsProcent, produktInklMoms;
	char produkt[255];
	
	printf("Varunamn: ");		//1. Ta in produktens namn.
	scanf("%s", produkt);
	
	printf("Pris utan moms: ");	//2. Produktpris exkl. moms.
	scanf("%f", &prisExklMoms);
	
	printf("Momssats: "); 		//3. Moms i procent för produkten.
	scanf("%f", &momsProcent);

	//Funktionsanropet räknar ut priset inkl. moms och sparar den i en variabel.
	produktInklMoms = fun_prisMoms(prisExklMoms, momsProcent);
	
	printf("Pris för %s är: %.2f kr (inkl.moms)\n", produkt, produktInklMoms);
	}
	return 0;
}

//Funktionen för momsaddering.
float fun_prisMoms(float prisExklMoms, float momsProcent) {
	return (prisExklMoms * (momsProcent / 100 + 1));
}