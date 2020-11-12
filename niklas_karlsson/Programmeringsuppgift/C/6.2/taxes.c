/*
 * Copyright (C) Niklas Karlsson
 * EC Education 2020
 * to compile please use: gcc main.c taxes.c
 */

// Our own file. Look within the project. Hence "" and not <>
#include "taxes.h"

// Globals
// String for the taxes
const char *STRING_TAX = "Please enter price of a item, excluding tax\nUse dot for decimals (i.e 9423.22):\n";
// String for the percentage
const char *STRING_PERCENT = "Enter percentage, 25, 12 or 6. (standard is 25):\n";
// Error string
const char *STRING_ERROR = "The format was wrong. Try again pretty please?\n";
// Error string for percentages.
const char *STRING_WRONGPER = "The percentage used in Sweden is 25, 12 or 6 percent.\nVisit verksamt.se if you're insecure about what kind of service you offer.\n";
// If user just types something that isnt a number. Set the value to 25.
const char *STRING_SETPERCENT = "The value has been set to 25\%\n";

/*
 * Calculate tax from a price and the procentage.
 */
double calculateTax(double excludeTax, int percentage)
{
    return (excludeTax + (excludeTax * percentage / 100));
}

/*
 * Returning the double value for items excluding taxes
 */
double taxInput(void)
{
    double taxin;
    printf("%s", STRING_TAX);
    // Wait for user input. We only need long float. Other shall not pass!
    if (scanf("%lf", &taxin) == 0)
    {
        // Flush inputs and outputs.
        flushIt();
        // Print a new message to the user.
        printf("%s", STRING_ERROR);
        // Run the function from the top, hopefully everything has been cleaned
        taxInput();
    }

    printf("Tax is: %.2lf\n", taxin);
    // so we fail here?
    return taxin;
}

/*
 * What kind of percentage do this corporation use?
 * Depends on what service you offer.
 * 25% = most goods and services.
 * 12% = food, restaurants and work of arts.
 * 6% = Newspaper, books, passenger transport and some other.
 */
int percentInput(void)
{
    // Don't set 25 here. The scanf will just jump over that step then.
    int per;
    // Print message to the user
    printf("%s", STRING_PERCENT);

    // Wait for user input. We only need digits. Other shall not pass!
    if (scanf("%d", &per) == 0)
    {
        // Print that we set the value to 25%
        printf("%s", STRING_SETPERCENT);
        // assign 25 as standard
        per = 25;
    }

    // Simple check.
    if ((per == 25) || (per == 12) || (per == 6))
    {
        // printf("You entered %d\n", per);
    }
    // antyhing else than the numbers above we will just print error and go back
    else
    {
        // Flush inputs and outputs.
        flushIt();
        // Print with a message
        printf("%s", STRING_WRONGPER);
        // Go back up. Hopefully cleaned.
        percentInput();
    }

    return per;
}

/*
 * Annoyong to see this everywhere.
 * Looks cleaner with a function
 */
void flushIt(void)
{
    // Flush the standard input.
    fflush(stdin);
    // Flush the standard output
    fflush(stdout);
}
