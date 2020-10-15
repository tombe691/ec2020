/*
 * @Name: main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Palindrome function.
 * @Date: 2020-10-12
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

#include "palindrome.h"

int main(void)
{
    // Init the myStr, replyO and replyT variables
    char myStr[] = {0};
    // Here's the palindrome question.
    printf("Enter palindrome: ");
    // User input accepting spaces.. mighty lord what have we done?
    scanf("%[^\n]s", &myStr);
    /*
     * check the symptoms of this string.
     * does it have palindrome? Let's find out.
     */
    if (!isPalindrome(myStr))
    {
        // Pass string with expressions to another string
        printf(NOTPALINDROME, myStr);
        return 0;
    }

    // Pass string with expressions to another string
    printf(ISPALINDROME, myStr);

    return 0;
}
