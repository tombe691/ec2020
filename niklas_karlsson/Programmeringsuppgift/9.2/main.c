/*
 * @Name: main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Palidrome function.
 * @Date: 2020-10-12
 */

#include "palidrome.h"

int main(void)
{
    char myStr[] = {0};
    // Here's the palidrome question.
    printf("Enter palidrome: ");
    // User input accepting spaces.. mighty lord what have we done?
    scanf("%[^\n]s", &myStr);

    // Cant compare string with spaces. Will always be false even though it is true.
    // Could have done a double pointer here but.. nah!
    //removespace(tmpStr, myStr);

    /*
     * check the symptoms of this string.
     * does it have palidrome? Let's find out.
     */

    if (!isPalindrome(myStr))
    {
        printf("It was not a palidrome\n", myStr);
    }
    else
    {
        printf("It is a palidrome\n", myStr);
    }
    printf("\n");
    return 0;
}
