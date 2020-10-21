//==============================================================================
//Description   :To find min and max numbers in an array using pointers  .
//Foldername    : pointers_swap
//Date          : 2020-19-07
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================

#include <stdio.h>
#include"MinMax_Array.h"

int main()
{
    int number_array[50], numarray_size, min, max;
    
    //Taking size of the array
    printf("Enter size for the array\n");
    scanf("%d",&numarray_size);

    for(int start=0; start< numarray_size; start++ )
    {
        //Taking values for the array
        printf("Enter the value for number_array[%d]=  ",start);
        scanf("%d",&number_array[start]);
    }
    // Passing the parameters to the function min_max
    min_max(number_array,numarray_size,&min,&max);

    //Displaying smallest and largest number in the array
    printf("\nMin value = %d \nMax value = %d",min,max);
    return 0;
}