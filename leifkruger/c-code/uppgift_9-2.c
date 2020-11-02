/******************************************************************************
* FILENAME     :  uppgift_9-2.c
*
* DESCRIPTION  :  Check string if palindrome.
*                 Find advice at https://www.geeksforgeeks.org/
*                 search for: c-program-check-given-string-palindrome/
*               https://forgetcode.com/c/562-remove-spaces-blanks-from-a-string
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
* REF NO         VERSION      DATE        WHO      DETAIL
* -----------------------------------------------------------------------------
*                 1           2020-       LK       Start date
*
*
*******************************************************************************
*/

#include <stdio.h>
#include "uppgift_9-2.h"

//Läser in rad
char read_line(char a[], int n) {
   if (fgets(a, n, stdin) == NULL)
      return a;
   if (!remove_nl(a))
      skip_line();
   return a;
}

//Tar bort radslutstecken
static _Bool remove_nl(char a[]) {
   int i = strlen(a)-1;
   if (a[i] == '\n') {
      a[i] = '\0';
      return 1;
   }
   return 0;
}

//Rensar inläsningsbuffert
static void skip_line(void) {
   int i;
   while ( (i = getchar()) != '\n' && i != EOF )
   ;
}

//Tar bort mellanslag
static removeSpaces(char text) {
   char localString[] = text;
   int c = 0, d = 0;
 
   while (localString[c] != '\0')
   {
      if (!(localString[c] == ' ' && localString[c+1] == ' ')) {
        blank[d] = localString[c];
        d++;
      }
      c++;
   }
   blank[d] = '\0';
   return blank;
}

//Omvandla textsträng till gemener
static void tolower_str(char *to, const char *from) {
   setlocale(LC_ALL, "");
   int i = 0;
   for (; from[i] != '\0'; i++)
      to[i] = tolower(from[i]);
   to[i] = '\0';
}

//Testar om textsträng är ett palindrome
_Bool isPalindrome(char str[]) { 
   int beginIndex = 0; 
   int endIndex = strlen(str) - 1;
   localstring [] = str;
   //Anropa funktion för att ta bort mellanslag
   removeSpaces(localstring);
   //Anropa funktion för att omvandla till gemener 
   tolower_str(localstring, localstring);
   //Jämför tecken från början resp slutet. Möts på mitten. 
   while (endIndex > beginIndex) 
   { 
      if (localstring[beginIndex++] != localstring[endIndex--]) { 
         //Om tecken är olika är det inget plaindrome
         return 0; 
      } 
   }
   //Om lika är det ett palindrome, returnera sant
   return 1; 
}