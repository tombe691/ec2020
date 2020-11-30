/*
 * Copyright (C) Niklas Karlsson
 * to compile: gcc example1.c morse.c -o example1.exe
 */

#include "morse.h"

// Declare the funtion
int exampleOne(void);

int main(void)
{
    // Call the first example.
    exampleOne();

    return 0;
}

/*
 * For-loop with no arguments.
 * Just looping for the loopings sake.
 */
int exampleOne(void)
{
    // The input array.
    char input[512];

    // The message we want the user to see. (from morse.h)
    textMessage();

    // User input. We cant start until the user types.
    scanf("%[^\n]s", &input);

    // Will loop indefinitely
    for ( ; ; )
    {
        // This function is located within the morse.h
        textToMorse(input);

        // Sleep in milliseconds.
        Sleep(1000);
    }

    // since we use int, we return something. Here is a zero.
    return 0;
}
