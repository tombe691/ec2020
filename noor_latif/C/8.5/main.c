/*
 ============================================================
 Name       : Uppgift 8.5
 Author     : Noor Latif
 Description: Functions to calculate sum of arrays and squared sum arrays.
 Date       : 2020-10-07
 ============================================================
 */

#include <stdio.h>

#include "fun.h"

int main() {
    /* Declare and define array */
    double array[] = {1, 7, 4, 2, 21};

    /* Get array index count by 
     * getting total array size, and dividing by single array element size */
    int arrayElementCount = sizeof(array) / sizeof(array[0]);

    /* Calculate the sum of all index values then print */
    int arraySum = sumIndex(array, arrayElementCount);
    printf("%d\n", arraySum);

    /* Calculate the sum of all index values squared then print */
    int arraySquaredSum = kvadSum(array, arrayElementCount);
    printf("%d", arraySquaredSum);
    return 0;
}
