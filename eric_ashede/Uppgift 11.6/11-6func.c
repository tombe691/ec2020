#include "11-6func.h"

void min_max(double *a, int n, double*pMin, double *pMax) {
    *pMin = *a;
    *pMax = *a;
    for(double *p=a; p<a+n; p++) {
        if(*p < *pMin)
        *pMin = *p;
        if(*p > *pMax)
        *pMax = *p;
    }
}