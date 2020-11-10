/*
 ============================================================================
 Name       : uppgift.3.4.c
 Author     : Noor Latif, noor@latif.se
 Description: Identifierar om du är man eller kvinna via ditt personnummer.
 Date       : 2020-09-28
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    /* Getenv username to prompt user by detected name */
    printf("Hi %s! We will try to figure out if you can guess the correct gender according to your ID number\n", getenv("USERNAME"));

    /* Prompt user for the gender */
    printf("Enter 0 if female, 1 if male: ");
    int gender;
    scanf("%d", &gender);

    /* Prompt user for their ID number */
    printf("Your ID number (digits only): "); /* Only digits work */
    long long int personnummer;
    printf(" %d\n", sizeof(personnummer));
    scanf("%lld", &personnummer);

    /* To Reach the 9th digit that identifies the gender.
     * We have to divide the ID number by 10 */
    personnummer = (personnummer / 10);
    printf("To identify gender we need the 9th digit: %ld \n", personnummer);

    if (gender == 0 && personnummer % 2 == 0) { /* ------ Even ID modulo division by 2 to identify even numbers. Remainder of 0 */
        printf("Correct, you're female\n");
    } else if (gender == 1 && personnummer % 2 == 1) { /* Uneven ID modulo division by 2 will output a remainder of 1. */
        printf("Correct, you're male\n");
    } else if (gender == 1) { /* ------------------------ Output error on gender mismatch if male was chosen */
        printf("Wrong. You're not male\n");
    } else if (gender == 0) { /* ------------------------ Output error on gender mismatch if female was chosen */
        printf("Wrong. You're not female\n");
    } else { /* ----------------------------------------- If no conditions are matched, exit If condition with error message */
        printf("Error. Wrong input!\n");
    }
    return 0;
}
