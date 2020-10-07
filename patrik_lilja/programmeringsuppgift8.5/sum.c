/*********************************************************************************
*                              Author: Patrik Lilja                              *
*                                File Name: sum.c                                *
*                    Creation Date: October 7, 2020 04:47 PM                     *
*                     Last Updated: October 7, 2020 04:59 PM                     *
*                               Source Language: c                               *
*          Repository: https://gitlab.com/IOTPL/iot-gbg-embedded-c.git           *
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
