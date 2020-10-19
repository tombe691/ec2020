#include<stdio.h>
#include"MinMax_Array.h"

int min_max(int number_array[],int array_size,int *min,int *max)
{
    int min_val,max_val;
    min_val=max_val=number_array[0];
    for (int i=0 ; i<array_size; i++)
    {
        if(min_val>number_array[i])
        min_val = number_array[i];

        if (max_val<number_array[i])
        max_val= number_array[i];
    }

    return(*min=min_val,*max=max_val);
}