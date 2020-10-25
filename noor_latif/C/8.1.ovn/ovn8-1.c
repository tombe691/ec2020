/* _____________________________________________________
 * Name    : ovn8-1.c
 * Author  : Noor Latif, noor@latif.se
 * Date    : 10/21/2020 10:56:22 AM
 * -------------------- Description --------------------
 *        Skriv ut ett godtyckligt antal arrayer
 * _____________________________________________________ */

#include <stdio.h>
int main() {
    /* Definera och initiera arrayer med värden */
    double sedelBox[] = {0, 0, 0, 0}; // 4 element
    int sedlar[] = {5, 10, 20, 50, 100, 200, 500}; // 7 element

    /* Hitta antalet element i arrayen genom att ta storleken på 
     * hela arrayen sedelBox och dela med 1 element inuti arrayen 
     * I detta fallet blir det storleken i byte för 4 element delat på 1.
     * Det ger oss antal element = 4 
     * Väldigt bra när användaren själv matar in elementen och arrayens storlek varierar */
    int antalElement = sizeof sedelBox / sizeof sedelBox[0];

    /* Skriv ut alla element tills vi når slutet av arrayen */
    for (int i = 0; i < antalElement; i++)
        /* I första rundan skrivs värdet ut för sedelBox[0] 
         * vilket ger värdet för första elementet på indexplats 0 */
        printf("%4.f", sedelBox[i]);
    printf("\n");

    /* Skriv ut sedlarna */
    for (int i = 0; i < sizeof sedlar / sizeof sedlar[0]; i++)
        printf("%4d", sedlar[i]);
}
