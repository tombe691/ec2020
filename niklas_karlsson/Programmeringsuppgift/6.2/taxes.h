/*
 * Header file to declare the functions
 */

// The files we need
// Standard input / output
#include <stdio.h>
// Standard library, needed for abort and other stuff
#include <stdlib.h>
// Limits for int
#include <limits.h>
// Float for double/float.
#include <float.h>

// See tax.c for more information about each function.
double calculateTax(double excludeTax, int percentage);
double taxInput(void);
int percentInput(void);
void flushIt(void);
