/*
 * @Name: sum.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Prints and calculations when calling sum or kvad_sum -functions
 * To compile use: gcc main.c sum.c
 * @Date: 2020-10-07
 */
// Standard libraries.
#include <stdio.h>
#include <stdlib.h>
// Must include the sum.h here aswell.
#include "sum.h"

/*
 * Normal Sum
 * dd = double digit
 * t = times
 */
double sum(double dd[], int t)
{
    double sum = 0;     // Should be nothing
    for (int i = 0; i < t; i++)
    {
        // For debug - Shows how the variable gets information.
        // printf("variable i is dd[%d] = %lf\n", i, dd[i]);
        // Adding the sum
        sum += dd[i];
    }
    // Return the sum to the function who calls it
    return sum;
}

/*
 * Square sum
 * dd = double digit
 * t = times
 */
double kvad_sum(double dd[], int t)
{
    double sum = 0;     // Should be nothing.
    for (int i = 0; i < t; i++)
    {
        /*
         * Since sum starts at zero, we cant use sum *= dd[i]
         * Which means we're always getting a zero as result.
         * So this had to be the best way without using other libraries.
         */
        // Adds the square to sum
        sum += dd[i] * dd[i];
    }
    // Return the sum to the function who calls it
    return sum;
}
