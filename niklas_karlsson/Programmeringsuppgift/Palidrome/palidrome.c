/*
 * @Name: palidrome.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Printing my name in different ways.
 * To compile use: gcc main.c palidrome.c
 * @Date: 2020-10-12
 */

#include "palidrome.h"

/*
 * Function to compare left end with right end until they meet in the middle.
 * Just like when lady and the Tramp eats spaghetti.
 *
 * Const char for read only, since we dont do anything with that string anyway.
 * Give the caller a false (0) or a TRUE (1)
 */
bool isPalindrome(const char str[])
{
    int left = 0, middle;
    int right = strlen(str) - 1;

    middle = strlen(str) / 2;
    while (left < middle)
    {
        if (tolower(str[left++]) != tolower(str[right--]))
        {
            return FALSE;
        }
    }

    if (left == middle)
    {
        // This be true
        return TRUE;
    }
    // This be false
    return FALSE;
}
