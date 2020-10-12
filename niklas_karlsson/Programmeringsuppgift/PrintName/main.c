/*
 * @Name: main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Printing my name in different ways.
 * To compile use: gcc main.c sum.c
 * @Date: 2020-10-07
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printFirst(void);
void printSecond(void);
void printThird(void);
void printFourth(void);
void printFifth(void);

const char *NAME_STRING = "My name is: ";

int main(void)
{
    // Print my name first style
    printFirst();
    printSecond();
    printThird();
    printFourth();
    printFifth();

    return 0;
}

void printFirst(void)
{
    // Lenght of the string with all chars in one array.
    char namn[7] = { 'N', 'i', 'k', 'l', 'a', 's', '\0' };

    printf("%s%s\n", NAME_STRING, namn);
}

void printSecond(void)
{
    /*
     * Niklas = salkiN reversed.
     */
     char niklas[6], salkin[6] = "salkiN";
     int i, j, c = 0;
     while (salkin[c] != '\0')
     {
         c++;
     }
     j = (c - 1);

     for (i = 0; i < c; i++)
     {
         // switch places.
         niklas[i] = salkin[j];
         // decrease
         j--;
     }
     // It adds STX at the end. Replace with end character instead of start of string
     niklas[6] = '\0';
    // Slam a new line right in the end!!
    printf("%s%s\n", NAME_STRING, niklas);
}

void printThird(void)
{
    // If its misspelled.
    char str[] = "Nuklas";

    // Just print what my name is.
    printf("%s", NAME_STRING);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'u')
        {
            // Damn, correct that typo
            str[i] = 'i';
        }
        printf("%c", toupper(str[i]));
    }
    // Slam a new line right in the end!!
    printf("\n");
}

void printFourth(void)
{
    printf("%sNiklas\n", NAME_STRING);
}

void printFifth(void)
{
    char a = 'O';
    char b = 'j';
    char c = 'l';
    char d = 'm';
    char e = 'b';
    char f = 't';
    printf("%s%c%c%c%c%c%c\n", NAME_STRING, a-1, b-1, c-1, d-1, e-1, f-1);
}
