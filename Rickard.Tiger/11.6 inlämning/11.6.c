/*
______________________________________________________________________________________
Date        : 2020-10-21
File        : 11.6.c
Description : Function to write the biggest and smallest value using pointers.
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include <stdio.h>
void minMaxOfArray(double *array, int element, double *min, double *max);

int main()
{
   double array[5] = {5.3, 6.3, 4.3, 1.8, 90.3};
   double min, max;
   // call of function.
   minMaxOfArray(array, 5, &min, &max);
   printf("minimum of array is : %lf", min);
   printf("\nmaximum of array is : %lf", max);
   return 0;
}

//Function to take out the smallest and biggest value in an array using pointers.
void minMaxOfArray(double *array, int element, double *min, double *max)
{
   *min = *array;
   *max = *array;
   // For loop that runns through the array and makes the minimum to i and maximum to i.
   for(double *i = array; i < array+element; i++)
   {
      if(*min > *i)
      {
	      *min = *i;   
      }
      if(*max < *i)
      {
		   *max = *i;
      }
   }   
}