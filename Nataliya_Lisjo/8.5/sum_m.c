#include <stdio.h>
#include "sum.h"
int main()
{
    int nr=5;
    double f[5]={1.1, 2.2, 3.3, 4.4, 5.5};
    
    printf("Summan av elementen =%0.2lf\n",sum(f,nr));
    printf("Summan av elementens kvadrater = %0.2lf\n",kvad_sum(f,nr));
    return 0;
}