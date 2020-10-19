/*
 * @Author: Niklas Karlsson
 * @Date: 2020-10-07
 * Copyright (c) 2020 Niklas Karlsson. All Rights Reserved.
 * Compile:
 * gcc main.c print.c area.c -o area.exe
 */
#include "print.h"
// If something doesnt match when the user inputs something. Display the error.
const char *ERROR = "You need to input the value in digits (decimals are okay!)\n";

/*
 * Function for the circle.
 * Ask the user about the radius.
 */
double *getCircle(void)
{
    // Variable to output.
    static double radius[1];    // 2 array outputs. (must have space for \0)
    // The output the user has to see.
    const char *MESSAGE = "Please enter the radius of the circle: ";
    // Print message to the user.
    printf("%s", MESSAGE);
    // Scan for inputs from the user and assign it to the variable.
    if (scanf("%lf", &radius[0]) == 0)
    {
        // Clear stuff to be on the safe side.
        scanClear();
        // Print error message
        printf("%s", ERROR);
        // Force user to go back
        getCircle();  // Recursion
    }
    // We should be okay here.
    return radius;
}

/*
 * Function for the triangles.
 * Ask the user for base (b) and height (hb) input.
 */
double *getTriangle(void)
{
    // Variable to output.
    static double triangle[2];   // 3 arrays for output (must have space for \0)
    // The first output the user has to see.
    const char *FMESSAGE = "Please enter the base (b) of the triangle: ";
    // The second output the user has to see.
    const char *SMESSAGE = "Please enter the height (hb) of the triangle: ";
    // Print message to the user.
    printf("%s", FMESSAGE);
    // Scan for inputs from the user and assign it to the variable.
    if (scanf("%lf", &triangle[0]) == 0)
    {
        // Clear stuff to be on the safe side.
        scanClear();
        // Print error message
        printf("%s", ERROR);
        // Force user to go back
        getTriangle();  // Recursion
    }

    // Print message to the user.
    printf("%s", SMESSAGE);
    // Scan for inputs from the user and assign it to the variable.
    if (scanf("%lf", &triangle[1]) == 0)
    {
        // Clear stuff to be on the safe side.
        scanClear();
        // Print error message
        printf("%s", ERROR);
        // Force user to go back
        getTriangle();  // Recursion
    }
    // We should be okay here.
    return triangle;
}

/*
 * Function for the rectangle.
 * Ask the user for base (b) and height (hb) input.
 */
double *getRectangle(void)
{
    // Variable to output.
    static double rectangle[2];   // 3 arrays for output (must have space for \0)
    // The first output the user has to see.
    const char *FMESSAGE = "Please enter the base (b) of the triangle: ";
    // The second output the user has to see.
    const char *SMESSAGE = "Please enter the height (hb) of the triangle: ";
    // Print message to the user.
    printf("%s", FMESSAGE);
    // Scan for inputs from the user and assign it to the variable.
    if (scanf("%lf", &rectangle[0]) == 0)
    {
        // Clear stuff to be on the safe side.
        scanClear();
        // Print error message
        printf("%s", ERROR);
        // Force user to go back
        getRectangle(); // Recursion
    }

    // Print message to the user.
    printf("%s", SMESSAGE);
    // Scan for inputs from the user and assign it to the variable.
    if (scanf("%lf", &rectangle[1]) == 0)
    {
        // Clear stuff to be on the safe side.
        scanClear();
        // Print error message
        printf("%s", ERROR);
        // Force user to go back
        getRectangle(); // Recursion
    }
    // We should be okay here.
    return rectangle;
}

// Made it an static since we only gonna call it from this file.
// Maybe we want to scan clear something else in the future? Then this gonna ruin us.
static void scanClear(void)
{
    // Flush all inputs.
    fflush(stdin);
    // Flush all outputs.
    fflush(stdout);
}
