/*
 * @Name main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Flip signs in a string
 * @Date: 2020-10-18
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

void reverseString(char *str);

#include <stdio.h>
#include <string.h>

#define BUF 512

int main(void)
{
    char temp[BUF];
    printf("Enter text: \n");
    scanf("%[^\n]s", &temp);

    printf("\n\"%s\" = ", temp);
    reverseString(temp);
    printf("\"%s\"", temp);

    return 0;
}

void reverseString(char *str)
{
    char temp, *p = str, *s = str + strlen(str) - 1;
    while (p < s)
    {
        temp = *p;
        *p++ = *s;
        *s-- = temp;
    }
}
