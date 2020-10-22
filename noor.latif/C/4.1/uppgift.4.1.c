/*
 ============================================================
 Name       : uppgift.4.1.c
 Author     : Noor Latif, noor@latif.se
 Description: Outputs largest and smallest numbers entered.
 Date       : 2020-09-28
 ============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 2147483647
#define MIN -2147483648

int main() {
    int largest = MIN, smallest = MAX, userNumber;
    printf("Hey %s! Welcome to this simple program.\n\n", getenv("USERNAME"));
    for (;;) { /* Infinite loop */
        printf("Enter number. (Input EOF to exit): ");
        if (scanf("%d", &userNumber) != 1) /* scanf fails when EOF is entered and will return value of 0 */
            break; /* ----------------------- Leads to a break when scanf detects ctrl+z on windows or ctrl+d on linux */
        if (userNumber > largest) /* -------- This basically sets the base number, it can't be lower than this */
            largest = userNumber;
        if (userNumber < smallest)
            smallest = userNumber;
        printf("Smallest: %d\nLargest: %d\n\n", smallest, largest);
    }
    printf("Smallest: %d\nLargest: %d", smallest, largest);
    return 0;
}
