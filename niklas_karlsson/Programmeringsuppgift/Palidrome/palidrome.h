/*
 * @Name: palidrome.h
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Printing my name in different ways.
 * To compile use: gcc main.c palidrome.c
 * @Date: 2020-10-12
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

bool isPalindrome(const char str[]);
