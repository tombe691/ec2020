/*
 ============================================================
 Name       : Uppgift 4.2
 Author     : Noor Latif, noor@latif.se
 Description: Print an exponentially multiplied table
 Date       : 2020-10-07
 ============================================================
 */

#include <stdio.h>
int main() {
    /* Repeat 12 times, inserting each loop number into calculations */
    for (int i = 1; i <= 12; i++) {
        /* the 4, in %4d, creates a placeholder of 4 numbers for nice formatting */
        printf("%d %4d %5d\n", i, (i * i), (i * i * i));
    }
    return 0;
}