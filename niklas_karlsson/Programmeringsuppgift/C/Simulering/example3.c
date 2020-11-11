/*
 * Copyright (C) Niklas Karlsson
 * to compile: gcc example3.c morse.c -o example3.exe
 */

#include "morse.h"

// The input array. Global in this example.
char input[512];

// Declare the funtion
int exampleThree(void);

int main(void)
{
    // The message we want the user to see. (from morse.h)
    textMessage();

    // User input. We cant start until the user types.
    scanf("%[^\n]s", &input);

    // Call the third example
    exampleThree();

    return 0;
}

/*
 * Recursion function that calls itself by returning its name to loop.
 */
int exampleThree(void)
{
    // This function is located within the morse.h
    textToMorse(input); // input == global.

    // Sleep in milliseconds.
    Sleep(1000);

    // Recursion.
    return exampleThree();
}
