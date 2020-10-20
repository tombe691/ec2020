#include <stdio.h>
#include "palindrome.h"

int main(void){
	char input[50], format[50];
	printf("Enter a word to check if it's a palindrome or not: ");
	fgets(input, 50, stdin);
	remspc(format, input);
	tolwr(format, format);
	if(ispalindrome(format))
		printf("WORD IS PALINDROME!");
	else printf("WORD IS NOT PALINDROME!");
	return 0;
}
