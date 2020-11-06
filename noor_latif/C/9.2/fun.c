#include <ctype.h>  /* isspace() to find whitespace in strings. */
#include <locale.h> /* setlocale() to support Swedish letters. */
#include <stdbool.h>
#include <stdio.h>
#include <string.h> /* tolower() to lowercase char arrays. */

void strcpyNoSpace(char *str_trimmed, const char *str_untrimmed) {
    /* A function to remove white space and save into a trimmed char array */
    /* Keep running until we hit End Of File (EOF) ( \0 ) 
	 * Increment and copy the untrimmed array as long as there is no whitespace. */
    while (*str_untrimmed != '\0') {
        if (!isspace(*str_untrimmed)) {
            *str_trimmed = *str_untrimmed;
            str_trimmed++; /* Increments trimmed array to prevent overwrite?? How does it work exactly? */
        }
        /* Increment untrimmed str in tandem with trimmed str. 
   	* If not, then at least when a whitespace character is detected to
   	* prevent it from getting copied into trimmed string on next loop. */
        str_untrimmed++;
    }
    /* When finished.
	 * Put a new end of file \0 to save the string correctly. */
    *str_trimmed = '\0';
}

bool isPalindrome(char *str) {
    /* A function to check if a string str is a palindrome */

    /* Convert string to lowercase. 
	 * Otherwise lower- & uppercase will mismatch the palindrome */
    int i;
    for (i = 0; str[i]; i++)
        str[i] = tolower((unsigned char)str[i]);

    /* Start from leftmost and rightmost corners of string */
    int left;
    int right;
    left = 0;
    right = strlen(str) - 1; /* -1 to the word length to get correct index positions. */

    /* Keep comparing characters while they are the same */
    while (right > left) {
        if (str[left++] != str[right--]) {
            return false; /* If not same, return false. */
        } else if (right <= left) {
            return true; /* Otherwise they are the same. Return true. */
            break;
        }
    }
    return 0;
}

void skip_line(void) {
    int i;
    while ((i = getchar()) != '\n' && i != EOF) {
        ; /* En tom sats */
    }
}