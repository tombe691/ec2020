//==============================================================================
//Description   :To find min and max numbers in an array using pointers  .
//Foldername    : pointers_swap
//Date          : 2020-19-07
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================

#include<stdio.h>
#include"MinMax_Array.h"

int main()
{
    int number_array[50], numarray_size, min, max;

    printf("Enter size for the array\n");
    scanf("%d",&numarray_size);

    for(int start=0; start< numarray_size; start++ )
    {
        printf("Enter the value for number_array[%d]=  ",start);
        scanf("%d",&number_array[start]);
    }

    min_max(number_array,numarray_size,&min,&max);
    printf("Min value = %d Max value = %d",min,max);
    return 0;
}