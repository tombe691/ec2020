#include <stdlib.h>
#include <stdio.h>
#include "11-6func.h"

int main() {
    double doub1, doub2;
    double a[5] = {1.55, 55.11, 202.2, 112.0, 123.99};
    min_max(a, 5, &doub1, &doub2);
    printf(" Min = %.4f \n Max = %.4f \n", doub1, doub2);

return 0;
}