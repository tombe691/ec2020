/*
 * @Name main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Minimum and maximum value from elements.
 * @Date: 2020-10-18
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "minmax.h"

int main(void)
{
    // For random making numbers
    srand(time(NULL));
    // Value one and value two
    static double val1, val2;
    // Throw a random digit between 2 and I_MAX
    int max = (rand() % (I_MAX - 1 + 1) + 2);
    // Cant assign normal variable for how many elements.
    const int MAXUS = max;
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

    minMax(sumsum, MAXUS, &val1, &val2);

    printf("Minimum value = %.2lf\n"
           "Maxmimum value = %.2lf\n",
                         val1,
                         val2);

    return 0;
}

/*
 * Function for th minimum and Maxmimum
 */
void minMax(double *in, int length, double *low, double *high)
{
    *low = *in, *high = *in;
    for (double *ptr = in; ptr < in + length; ptr++)
    {
        if (*ptr < *low)
        {
            *low = *ptr;
        }
        if (*ptr > *high)
        {
            *high = *ptr;
        }
    }
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
