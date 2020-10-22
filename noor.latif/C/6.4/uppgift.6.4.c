/*
 ============================================================
 Name       : Uppgift 6.4
 Author     : Noor Latif, noor@latif.se
 Description: Räkna ut hur mycket det -totala beloppet- för lön och skattavgifter kunden ska
              betala för att en hantverkare ska få sin önskade nettolön.
 Date       : 2020-10-03
 ============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MOMS 25       /*Momssats (procent).*/
#define ARB_AVG 28.97 /*Arbetsgivaravgift (procent).*/
#define STAT_LAG 0    /*Statliga skatten -låg- (procent).*/
#define STAT_MEDEL 20 /*Statliga skatten -medel- (procent).*/
#define STAT_HOG 25   /*Statliga skatten -hög- (procent).*/
#define LAG 1         /*Låg inkomst.*/
#define MEDEL 2       /*Medelhög inkomst.*/
#define HOG 3         /*Hög inkomst.*/

double totalKostnadLon(double x, float kommunSkattesats, int inkomstNiva);
int main(void) {
    printf("Hej %s! Vi ska nu räkna ut hur klokt Robin Hoods syn på skatt är.\n\n", getenv("USERNAME"));
    double lonExklSkatt, totalLoneBelopp;
    int inkomstNiva;
    float kommunSkattesats;
    printf("Kommunens skattesats (%%): ");
    scanf("%f", &kommunSkattesats);
    printf("Ange inkomstnivå (1, 2, 3): ");
    scanf("%d", &inkomstNiva);
    do {
        printf("\nÖnskad nettolön (0 avbryter): ");
        scanf("%lf", &lonExklSkatt);
        totalLoneBelopp = totalKostnadLon(lonExklSkatt, kommunSkattesats, inkomstNiva);
        printf("En hantverkare måste begära %.fkr for att själv få ut %.fkr\n", totalLoneBelopp, lonExklSkatt);
    } while (lonExklSkatt > 0);
    printf("Nettolön tog in ett värde som avbryter programmet.");
    return 0;
}

double totalKostnadLon(double x, float kommunSkattesats, int inkomstNiva) {
    /* Variabel x innehar lönen exkl. skatter/avgifter. */
    double statSkattesats;
    switch (inkomstNiva) {
        case LAG:
            statSkattesats = STAT_LAG;
            break;
        case MEDEL:
            statSkattesats = STAT_MEDEL;
            break;
        case HOG:
            statSkattesats = STAT_HOG;
            break;
        default:
            printf("Felaktig inkomstnivå. Värdet ska vara mellan %d-%d. \n", LAG, HOG);
            puts("Programmet stängs.");
            exit(1);
    }

    x *= (1 + (kommunSkattesats + statSkattesats) / 100.0);
    x *= (1 + ARB_AVG / 100.0);
    x *= (1 + MOMS / 100.0);
    return x;
}
