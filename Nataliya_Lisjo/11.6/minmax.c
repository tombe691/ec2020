/*Nataliya Lisjö
uppg 11.6
okt-16-2020

--------------------------------*/

#include <stdio.h>


 void minmax(double *a, int n, double *min, double *max);

int  main() {
    
    double *m1, *m2;
    double a[6]={2.3, 6.3, 0.7, 3.3, 2.2, 8.1 };
    int n = 6;
    minmax(a, n , m1, m2) ; //anropa funk 
    printf(" Minsta varde ar: %f\n Storta varde ar: %f", m1, m2);

    return 0;
}


//parametr-pekare fält, fält element, peka minimum värde, peka maximum värde
//använder *min, *max --därför funk har 2 resultat
 void minmax(double *a, int n, double *min, double *max){
    *min=*a;//*min peka på fält värde [a],som kommer ändras till minimum
    *max=*a;
    for(double *p=a; p<a+n; p++){//loppa genom fält
        if (*p<*min)//jämföra varja fält värde [a] med min värde
        *min=*p;//får värde, om vilkor är true
         if (*p>*max)
        *max=*p;
    }
}
