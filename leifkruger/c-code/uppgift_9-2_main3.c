/******************************************************************************
* FILENAME     :  uppgift_9-2_main.c
*
* DESCRIPTION  :  Check string if palindrome.
*                 Find advice at https://www.geeksforgeeks.org/
*                 search for: c-program-check-given-string-palindrome/
*                 https://www.w3schools.in/c-program/check-palindrome-string/
*
* FUNCTIONS    :  
*
* NOTES        :  
*
*                 Copyright L.Kruger 2020.  All rights reserved.
*
* AUTHOR       :  Leif Krüger
*
* CHANGES      :
*
* REF NO         VERSION      DATE (YYMMDD)  WHO      DETAIL
* -----------------------------------------------------------------------------
*                 1           2020-10-12     LK       Start date
*
*
*******************************************************************************
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//#include "uppgift_9-2.h"

void main() {
   setlocale(LC_ALL, ""); //Svenska tecken jämförelse
   char strangText[64];

   printf("Detta program testar om en text är ett palindrom. \n");
   printf("Skriv in en text, avsluta med att trycka ENTER: ");
   //Läsa in, ta bort radslutstecken och rensa inläsningsbuffert
   fgets(strangText, 64, stdin);
   //strangText[64] = '\0';

   //Omvandla så alla tecken är gemener
   char gemener[64];
   //char gemener[strlen(blank)];
   int c_gemener = 0;   
   for (c_gemener = 0; c_gemener < 64; c_gemener++) {
   //for (c_gemener = 0; c_gemener < strlen(gemener); c_gemener++) {
      gemener[c_gemener] = tolower(strangText[c_gemener]);
   }
   gemener[c_gemener-1] = '\0';
   printf("Stopptecken i position gemener: %d\n", c_gemener);
   printf("Testpunk 1: Text after omvandling till gemener: %s \n", gemener);
   printf("Längd efter omvandling till gemener: %zu\n", strlen(gemener));

   //Ta bort alla mellanslag 
   int c_mellanslag = 0, d_mellanslag = 0;
   char blank[64];
   
   while (gemener[c_mellanslag] != '\0')
   {
      if (!(gemener[c_mellanslag] == ' ')) {
        blank[d_mellanslag] = gemener[c_mellanslag];
        d_mellanslag++;
        printf("%d\n", d_mellanslag);
      }
      c_mellanslag++;
   }
   blank[d_mellanslag-1] = '\0'; //Lägger in ett stopptecken sist
   printf("Stopptecken i position blanknig: %d\n", d_mellanslag);
   printf("Testpunk 2: Text after removing blank: %s \n", blank);
   printf("Längd efter borttagning av mellanslag: %zu", strlen(blank));
   printf("\n");
   //Check av palindrom
   int beginIndex = 0; 
   int endIndex = strlen(blank);
   int isPalindrome = 0;
   //Jämför tecken från början resp slutet. Möts på mitten. 
   while (endIndex > beginIndex) { 
      if (blank[beginIndex++] != blank[endIndex--]) { 
         //Om tecken är olika => ej plaindrome
         isPalindrome = 0;
      } 
      else {
         //Om tecken är lika => plaindrome
         isPalindrome = 1;
      }
   }
   if (isPalindrome == 1) { 
         printf("%s is a palindrome.\n", strangText);
   } 
   else {
         printf("%s is not a palindrome.\n", strangText);
   }
}