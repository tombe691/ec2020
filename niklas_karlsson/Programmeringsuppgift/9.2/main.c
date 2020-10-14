/*
 * @Name: main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Palidrome function.
 * @Date: 2020-10-12
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

#include "palidrome.h"

int main(void)
{
    // Init the myStr, replyO and replyT variables
    char myStr[] = {0};
    // Here's the palidrome question.
    printf("Enter palidrome: ");
    // User input accepting spaces.. mighty lord what have we done?
    scanf("%[^\n]s", &myStr);
    /*
     * check the symptoms of this string.
     * does it have palidrome? Let's find out.
     */
    if (!isPalindrome(myStr))
    {
        // Pass string with expressions to another string
        printf(NOTPALIDROME, myStr);
        return 0;
    }

    // Pass string with expressions to another string
    printf(ISPALIDROME, myStr);

    return 0;
}
