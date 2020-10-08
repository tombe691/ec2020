//==============================================================================
//Description   : Functions sum and kvad_sum
//Filename      : Summation.c in uppgift8.5
//Date          : 2020-10-08
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================

#include<stdio.h>
#include<math.h>
#include "prototypes.h"

// To add the elements in an array
double sum(double arr[],int length_array)
{
    int i;
    double sum_array=0;
    // traversing through the array
    for (i=0;i<length_array;i++)
    {
        sum_array+= arr[i];
    }
    // Returns the result to the calling function
    return(sum_array);
}

//To sum the squares of elements in the array
double kvad_sum(double arr[],int length_array)
{
    int i;
    double sqr_summation=0;
    // traversing through the array
    for (i=0;i<length_array;i++)
    {
        // calculates the square of the element using pow function
        // and add it sqr_summation
        sqr_summation+= pow(arr[i],2);
    }

    // Returns the result to the calling function
    return(sqr_summation);

}
