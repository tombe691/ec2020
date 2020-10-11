/*
 * @Name: main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Main function for calling sum and kvad_sum functions with random numbers
 * @Date: 2020-10-07
 */
// Standard libraries.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Our own headers. Look for them within the project directory.
#include "sum.h"
#include "double.h"

int main(void)
{
    // initialise the random seed using srand() and time() (Otherwis you might see same result over and over.)
    srand(time(NULL));

    // Throw a random digit between I_MAX and I_MIN (see double.h for config)
    int max = (rand() % (I_MAX - 1 + 1)) + 1;
    // Cant assign normal variable for how many elements.
    const int MAXUS = max;

    // For debug - to see if it's set corret
    //printf("Max is: %d\n", MAXUS);
    // Cast a sumsum variable to store elements.
    double sumsum[MAXUS];

    printf("Generating %d random numbers with decimals:\n", MAXUS);
    // Loop as long as variale i is lower than MAXUS
    for (int i = 0; i < MAXUS; i++)
    {
        // Was alot easier to assign a function to call random numbers.
        sumsum[i] = theRand(D_MIN, D_MAX);  // See double.h for config
        // Print what number we rolled
        printf("%.2lf\n", sumsum[i]);
    }

    // Debug - if we never gets the results.
    //printf("Calling sum function\n");
    // Force the array to the sum function
    printf("Sum of the numbers is: %.2lf\n", sum(sumsum, MAXUS));
    // Debug - if we never gets the results.
    //printf("Calling sum_kvad function\n");
    // For the same array to the kvadrat function.
    printf("Square sum of the numbers is: %.2lf\n", kvad_sum(sumsum, MAXUS));
    // End of Life.
    return 0;
}

/*
 * Make random double numbers without using fmodf from math.h
 */
double theRand(double min, double max)
{
    // The range
    double range = (max - min);
    // Convert RAND_MAX from int to double and divide with the range
    double div = (double)RAND_MAX / range;
    // Return the random number.
    return min + ((double)rand() / div);
}
