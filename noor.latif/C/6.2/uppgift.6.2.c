/*
 ============================================================
 Name       : Uppgift 6.2
 Author     : Noor Latif, noor@latif.se	
 Description: Programmet räknar ut priset inklusive moms för en vara när vi endast 
              har 2 parametrar: (priset exkl. moms) OCH (momssatsen).
 Date       : 2020-10-03
 ============================================================
 */
#include <stdio.h>

/* Function for VAT addition. */
float fun_prisMoms(float prisExklMoms, float momsProcent);

int main() {
    printf("Hello %s! Welcome to the world's best cash register!\n^ Skriven med en gnutta storhetsvansinne.\n\n", getenv("USERNAME"));
    /* infinite loop */
    for (;;) {
        float prisExklMoms, momsProcent, produktInklMoms;
        char produkt[255];

        /* 1. Prompt for the product name. */
        printf("Varunamn: ");
        scanf("%s", produkt);

        /* 2. Product price excl. VAT. */
        printf("Pris utan moms: ");
        scanf("%f", &prisExklMoms);

        /* 3. VAT percentage for chosen product. */
        printf("Momssats: ");
        scanf("%f", &momsProcent);

        /* VAT function calculates price inkl. VAT and saves it */
        produktInklMoms = fun_prisMoms(prisExklMoms, momsProcent);

        printf("Produkten %s kostar %.2f kr (inkl.moms)\n", produkt, produktInklMoms);
    }
    return 0;
}

/* Function for VAT addition. */
float fun_prisMoms(float prisExklMoms, float momsProcent) {
    return (prisExklMoms * (momsProcent / 100 + 1));
}