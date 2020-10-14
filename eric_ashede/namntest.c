/******************************************************
 Name		: namntest.c
 Author		: Eric Åshede
 Description: Skriver ut förnamn på tre sätt
 Date		: 2020-10-12
*******************************************************/
#include <stdio.h>

int main () {
    printf("Eric\n");
    
    char a = 'E';
    char b = 'r';
    char c = 'i';
    char d = 'c';

    printf("%c%c%c%c\n", a, b, c, d);

    char string[5] = "Eric";
    printf("%s\n", string);
    
    return 0;
}