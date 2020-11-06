#include <stdlib.h>
#include <stdio.h>
#include "11-6func.h"

int main() {
    double doub1, doub2;
    int i;
    double a[5];

    printf("Write 5 numbers, you can use decimals: \n");
        for(i=0; i<5; i++) {
        scanf(" %lf", &a[i]);
        }

    printf("\nThese are your lowest/highest numbers:\n");
    min_max(a, 5, &doub1, &doub2);
    printf("\nMin = %.2lf \nMax = %.2lf \n", doub1, doub2);

return 0;
}