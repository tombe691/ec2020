/*
 * Copyright (C) Niklas Karlsson
 * to compile: gcc example2.c morse.c -o example2.exe
 */

#include "morse.h"

// These are just for fun.
#define FALSE 0
#define TRUE 1

// Declare the funtion
int exampleTwo(void);

int main(void)
{
    // Call the second example
    exampleTwo();

    return 0;
}

/*
 * I know that goto shouldn't be used.
 * But I couldn't help myself to include it anyway
 */
int exampleTwo(void)
{
    // The input array.
    char input[512];

    // The message we want the user to see. (from morse.h)
    textMessage();

    // User input. We cant start until the user types.
    scanf("%[^\n]s", &input);

    // Will loop indefinitly
    // It's funny because it's true..
    while (!FALSE)
    {
        // This function is located within the morse.h
        textToMorse(input);

        // Sleep in milliseconds.
        Sleep(1000);
    }

    return 0;
}
