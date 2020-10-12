#include<stdio.h>

double sum(double f[], int nr){
   double sum = 0;
   for (int i=0; i<nr; i++)
    sum += f[i];
    return sum;

}

double kvad_sum(double f[], int nr) {
    double kvad_sum = 0;
    for (int i=0; i<nr; i++)
     kvad_sum += f[i] * f[i];
    return kvad_sum;
}    