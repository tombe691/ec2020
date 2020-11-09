/*
 * @Name: main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Buccaneer language (rövarspråk) made by Astrid Lindgren (Pippi Longstocking).
 * @Creation date: 2020-10-10
 * @Modified date: 2020-10-14
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "buccaneer.h"

// The main function
int main(void)
{
    // Init the buccaneer variable.
    char bucc[512];
    // ask the user what they want to do.
    printf("Enter the text you want to encrypt: ");
    // string input with spaces.
    scanf("%[^\n]s", &bucc);
    // Call the function
    buccaneer(bucc);
    // Return a zero. Becuase thats the trend now (Coca cola zero etc)
    return 0;
}
