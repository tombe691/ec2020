/*
 * @Name: palidrome.h
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Palidrome
 * @Date: 2020-10-12
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

// Make it available for all
#define NOTPALIDROME "This line is not a palidrome: %s\n"
#define ISPALIDROME "This line is a palidrome: %s\n"

bool isPalindrome(const char str[]);
static char *removeWhite(char *to, const char *from);
