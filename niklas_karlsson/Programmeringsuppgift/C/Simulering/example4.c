/*
 * Copyright (C) Niklas Karlsson
 * to compile: gcc example4.c morse.c -o example4.exe
 */

#include "morse.h"

// Declare the funtion
int exampleFour(void);

int main(void)
{
    // Call the fourth example
    exampleFour();

    return 0;
}

/*
 * I know that goto shouldn't be used.
 * But I couldn't help myself to include it anyway
 */
int exampleFour(void)
{
    // The input array.
    char input[512];

    // The message we want the user to see. (from morse.h)
    textMessage();

    // User input. We cant start until the user types.
    scanf("%[^\n]s", &input);

    // This can be used as a loop, a shitty one.
    funny:

    // This function is located within the morse.h
    textToMorse(input);

    // Sleep in milliseconds.
    Sleep(1000);
    goto funny;         // Go back to funny.. ha ha!

    return 0;
}
