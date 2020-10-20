#include<stdio.h>
#include"MinMax_Array.h"

void min_max(int number_array[],int array_size,int *min,int *max)
{
   //Assigning first element of the array to min and max 
    *min= *max=number_array[0];
    for (int i=0 ; i<array_size; i++)
    {
        //checking for smallest number
        if(*min>number_array[i])
            *min = number_array[i];
        
        //checking for smallest number
        if (*max<number_array[i])
            *max= number_array[i];
    }

}