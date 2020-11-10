/*
 * Copyright (C) Niklas Karlsson
 * EC Education 2020
 * to compile please use: gcc main.c taxes.c
 */

// Our own file. Look within the project. Hence "" and not <>
// All we need is in this file aswell.
#include "taxes.h"

int main(void)
{
    // Input excluding tax
    double inTax = taxInput();
    // Input percentage
    int inPer = percentInput();

    // Calculate the input.
    printf("The pricing for the item is: %.2lf (including taxes)", calculateTax(inTax, inPer));
    // just return 0.
    return 0;
}
