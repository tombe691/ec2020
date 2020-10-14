/*	_________________________________
 *	Name		: uppgift.9.2.c
 *	Author		: Noor Latif, noor@latif.se
 *	Date		: 2020-10-14
 *	-----------Description-----------
 *	Checks if an entered text is a palindrome.
 *			Supports whitespaces.
 *	_________________________________
 */
#include <stdio.h>
#include <limits.h> // UCHAR_MAX for getting char max value.
#include <string.h> // strlen() for calculating string length.
#include "fun.h"

int main(){
	char str1[UCHAR_MAX], str2[UCHAR_MAX];

	/* Get text from user using stdin and limited to UCHAR_MAX value (255) */
	printf("Enter a palindrome: ");
	fgets(str1, UCHAR_MAX, stdin);

	/* Skip spaces from str1 when copying into str2*/
	strcpyNoSpace(str2, str1);
	
	/* A function to check if a string str2 is palindrome */
	if (isPalindrome(str2) == 1) {
		printf("%s is a palindrome.", str2);
	} else {
		printf("%s is not a palindrome.", str2);
	}
	return 0;
}
