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
	char originalText[UCHAR_MAX], trimmedText[UCHAR_MAX];

	/* Get text from user using stdin and limited to UCHAR_MAX value (255) */
	printf("Enter a palindrome: ");
	fgets(originalText, UCHAR_MAX, stdin);
	/* Remove the trailing new line \n from fgets */
	strtok(originalText, "\n");
	
	/* Skip spaces from originalText when copying into trimmedText*/
	strcpyNoSpace(trimmedText, originalText);

	/* A function to check if a string trimmedText is palindrome */
	if (isPalindrome(trimmedText)) {
		printf("%s is a palindrome.", originalText);
	} else {
		printf("%s is not a palindrome.", originalText);
	}
	return 0;
}
