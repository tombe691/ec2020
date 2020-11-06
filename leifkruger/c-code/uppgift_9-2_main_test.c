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
//#include "uppgift_9-2.h"



char* removeSpaces(char text[]) {
   char blank[64];
   text[64] = '\0';

   int c_temp = 0, d_temp = 0;

   while (text[c_temp] != '\0')
   {
      if (!(text[c_temp] == ' ')) {
        blank[d_temp] = text[c_temp];
        d_temp++;
      }
      c_temp++;
   }
   blank[d_temp] = '\0';
   printf("1-1. Text after removing blank: %s \n", blank);
  
   return 0;
}

char remove_nl(char a[]) {
   int i = 64;
   if (a[i] == '\n') {
      a[i] = '\0';
      printf("1. -----\n %s", a);
      return 1;
   }
   return 0;
}

void skip_line(void) {
   int i;
   while ( (i = getchar()) != '\n' && i != EOF )
   ;
}

void main() {
   setlocale(LC_ALL, ""); //Svenska tecken jämförelse
   char strangText[64];
   char tempText[64] = "TESTTEXT";
   char blank[64];
   printf("Detta program testar om en text är ett palindrom. \n");
   printf("Skriv in en text, avsluta med att trycka ENTER: ");
   //Läsa in, ta bort radslutstecken och rensa inläsningsbuffert
   fgets(strangText, 64, stdin);
   //skip_line(strangText);
   printf("1. -----\n");
   //remove_nl(strangText);
   removeSpaces(strangText);
   printf("2. -----\n");
   //printf("3. %s", tempText);
   char teckenBlank = blank[5];
   printf("3. %c", teckenBlank);
   printf("4. -----\n");
   
   
   if (!remove_nl(strangText)){
      skip_line();
   }
   printf("5. -----\n");
   //char text = read_line(strangText, 64);
   //printf("%s\n", text);
   //for (int i=0; i < 64; i++) {
   //   char text = strangText[i];
      printf("5. %s", strangText); //utskrift av array med nolltecken efter
 
   printf("6. \n");
   //Anropa funktion för kontroll
/*   if (isPalindrome(text[]))
      printf("%s is a palindrome", strangText);
   }
   else {
      printf("%s is not a palindrome", strangText);
   }
   */
}