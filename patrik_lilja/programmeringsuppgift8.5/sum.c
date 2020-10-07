/*********************************************************************************
*                              Author: Patrik Lilja                              *
*                                File Name: sum.c                                *
*                    Creation Date: October 7, 2020 06:32 PM                     *
*                     Last Updated: October 7, 2020 06:42 PM                     *
*                               Source Language: c                               *
*               Repository: https://github.com/tombe691/ec2020.git               *
*                                                                                *
*                            --- Code Description ---                            *
*                           Programmeringsuppgift 8.5                            *
*********************************************************************************/

#include "sum.h"

double sum(double a[],int numberofelement)
//Summerar alla inmatade tal
{
    double internalsum=0; 
    for (int x = 0; x < numberofelement; x++){
        internalsum = internalsum + a[x];
    }
    return internalsum;
}

double kvad_sum(double b[],int numberofelement)
//Summerar alla kvadrater av inmatade tal
{
    double internalsum = 0; 
    double kvadrat= 0 ;
    for (int x = 0; x < numberofelement; x++){
        kvadrat=b[x] * b[x];
        internalsum= internalsum + kvadrat;
    }
    return internalsum;
}
