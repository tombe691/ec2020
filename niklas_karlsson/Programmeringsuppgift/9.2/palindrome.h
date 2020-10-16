/*
 * @Name: palidrome.h
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Palindrome
 * @Date: 2020-10-12
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

// Make it available for all
#define NOTPALINDROME "This line is not a palindrome: %s\n"
#define ISPALINDROME "This line is a palindrome: %s\n"

bool isPalindrome(const char str[]);
static char *removeWhite(char *to, const char *from);
