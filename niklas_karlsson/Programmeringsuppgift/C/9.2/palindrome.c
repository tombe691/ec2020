/*
 * @Name: palidrome.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Palindrome
 * @Date: 2020-10-12
 */

#include "palindrome.h"

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
    char t[512];

    removeWhite(t, str);
    middle = strlen(t) / 2;
    int right = strlen(t) - 1;

    // As long as left is lower than middle. Continue looping
    while (left < middle)
    {
        // Check lowe case left if it is equal to whats on the right.
        if (tolower(t[left++]) != tolower(t[right--]))
        {
            return FALSE;
        }
    }

    /*
     * If left equal to middle. Then there's no reason to check the right side.
     * Am i rite?
     */
    // printf("%s\n", t);
    if (left == middle)
    {
        // This be true
        return TRUE;
    }
    // "else" This be false
    return FALSE;
}

/*
 * Remove whitespace
 * Const char as we only wanna read
 * Return a pointer-type
 */
static char *removeWhite(char *to, const char *from)
{
    int c = 0;
    // Loop each characters one by one. Starting at from[0] until we reach end of string: '\0'
    for (int i = 0; from[i] != '\0'; i++)
    {
        // Look for "whitespace"
        if (!isspace(from[i]))
        {
            // it was not. keep adding chars to the string.
            to[c++] = from[i];
        }
        // "else" dont do anything
    }

    // if we dont add end char we might encounter some strange behaviour.
    to[c] = '\0';
    return to;
}
