/*	___________________________________
 *	Name		: uppgift.9.2.c
 *	Author		: Noor Latif, noor@latif.se
 *	Date		: 2020-10-14
 *	------------Description------------
 *	Checks if an entered text is a palindrome.
 *			Supports whitespaces.
 *	___________________________________
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>   /* UCHAR_MAX for getting char max value. */
#include "fun.h"   /* strlen() for calculating string length. */

int main(){
   char originalText[UCHAR_MAX], trimmedText[UCHAR_MAX], repeat;

   do {
   	/* Tests new palindromes until user exits with y/N */
   	/* Clear Console */
      system("cls");
   	
   	/* Get text from user using stdin and limited to UCHAR_MAX value (255) */
      printf("Enter a palindrome: ");
      fgets(originalText, UCHAR_MAX, stdin);
   	/* Remove the trailing new line \n from fgets */
      strtok(originalText, "\n");
   	
   	/* Skip spaces from originalText when copying into trimmedText */
      strcpyNoSpace(trimmedText, originalText);
   
   	/* A bool function to check if the string is a palindrome */
      if (isPalindrome(trimmedText)) {
         printf("%s is a palindrome.\n\n", originalText);
      } 
      else {
         printf("%s is not a palindrome.\n\n", originalText);
      }
   
   	/* Asks user if they want to run the program again */
      puts("Test new palindrome? y/N");
      repeat = getchar();
   
   	/* Primes fgets() for new inputs */
      fflush(stdin);
   } while (repeat == 'y');
   return 0;
}
