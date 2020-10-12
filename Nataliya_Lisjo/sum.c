#include <stdio.h>
#include "sum.h"
int main()
{
    int nr;
    double f[nr];
    printf("Skriva elementen av array\n");
    for (int i=0;i<nr;i++)
    {     
        scanf("%lf",&f[i]);
        printf(" Din array f [%lf] = \n",f[i]);
        double skapad_f[nr] = f[i] ;       
    }
    return skapad_f[nr];      
}    
 void calcul (skapad_f,nr)
    {
    printf("Summan av elementen =%0.2lf\n",sum(skapad_f,nr));
    printf("Summan av elementens kvadrater = %0.2lf\n",kvad_sum(skapad_f,nr));
    }