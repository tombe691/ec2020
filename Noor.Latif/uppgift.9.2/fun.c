#include <stdio.h>
#include <locale.h>	// setlocale() to support Swedish letters.
#include <string.h> // tolower() to lowercase char arrays.
#include <ctype.h> 	// isspace() to find whitespace in strings.


/* A function to remove white space and save into trimmed char array */
void strcpyNoSpace(char *str_trimmed, const char *str_untrimmed){
	/* Keep running until we hit End Of File (EOF) ( \0 ) 
	 * Increment and copy the untrimmed array as long as there is no whitespace. */
	while (*str_untrimmed != '\0'){
		if (!isspace(*str_untrimmed)){ 
			*str_trimmed = *str_untrimmed;
			str_trimmed++; // Increments trimmed array to prevent overwrite?? How does it work exactly?
		}
		/* Increment untrimmed str in tandem with trimmed str. 
		 * If not, then at least when a whitespace character is detected */
		str_untrimmed++;
	}
	/* When finished.
	 * Put a new end of file \0 to save the string correctly. */
	*str_trimmed = '\0';
}

/* A function to check if a string str is a palindrome */
_Bool isPalindrome(char *str){
	/* Make all letters lowercase */
	setlocale(LC_ALL, "sv_SE"); // Enables handling Swedish letters.
	for (int i = 0; i != '\0'; ++i){
		str[i] = tolower(str[i]); //Convert each element to lowercase and save it back into same index position.
	}

	/* Start from leftmost and rightmost corners of string */
	int left = 0; 
	int right = strlen(str) - 1; // -1 to the word length to get correct index positions.

	/* Keep comparing characters while they are the same */
	while (right > left){ 
		if (str[left++] != str[right--]){
			return 0; // If not same, return false.
		}
	}
	return 1; // Otherwise they are the same. Return true.
}
