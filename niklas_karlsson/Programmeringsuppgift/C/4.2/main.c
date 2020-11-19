#include <stdio.h>

// Declarations
static int task2(void);
static char pressEnter(void);

// Main function
int main(void)
{
     /*
      * Setting locale to swedish with utf-8. This file has been saved with
      * encoding UTF-8, make sure you also have it set.
      */
    // setlocale(LC_ALL, "sv_SE.UTF-8");
    task2();
    return 0;
}

// Programming task 4.2
static int task2(void)
{
    printf("Task 4.2\n");
    pressEnter();

    for (int n = 1; n <= 12; n++)
    {
        // ² and ³
        // I dont like when it gets asymmetric.. hence the zeros before. Might not be right.
        // But looks darn good.
        printf("The number is: %02d, square: %03d cube: %04d\n", n, (n * n), (n * n * n));
        // If you wish to make the process loop "slower". Then include windows.h aswell.
        // Sleep(150);
    }

    return 0;                                                                   // The function itself is an int, just return a digit of any kind, lets do a zero.
}

// Function, press enter to continue.
static char pressEnter(void)
{
    fflush(stdin);
    fflush(stdout);

    printf("Press enter to continue...\n");
    char enter = 0;
    while ((enter != '\r') && (enter != '\n'))
    {
        enter = getchar();
    }
}
