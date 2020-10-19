//==============================================================================
//Description   : To display the sum and sum of squares of elements in an array.
//Filename      : main.c in uppgift_8.5
//Date          : 2020-10-08
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================

#include <stdio.h>
#include <string.h>
#include "prototypes.h"


int main()
{
    double cal_array[SIZE_ARRAY];

    printf("Enter the elements of the array\n");

    for (int i=0;i<SIZE_ARRAY;i++)
    {
      //User inputs values in the array
      printf("\nValue for array[%d]=",i);
      scanf("%lf",&cal_array[i]);
    }
    // Outputs the sum of all elements by calling the function 'sum'
    printf("Sum of the array =%0.3lf\n",sum(cal_array,SIZE_ARRAY));
    // calls the fuction kvad_sum and then prints the sum of squares of the elements
    printf("Summation of square of elements = %0.3lf\n",kvad_sum(cal_array,SIZE_ARRAY));

    return 0;
}
