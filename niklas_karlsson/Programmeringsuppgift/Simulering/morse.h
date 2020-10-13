#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <Windows.h>


// Morse Code.. my way
char textToMorse(char *text);
static char morseus(char *text);
char textMessage(void);

typedef struct
{
    char *ascii;
    char *morse;
} morse_table_t;

/*
 I know that I can use

 struct name
 {
     struct name *prev, *next;
     char *ascii;
     char *more;
 }

 But im FINE with the way it is.
 */
