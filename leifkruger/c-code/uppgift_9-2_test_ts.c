/******************************************************************************
* FILENAME     :  uppgift_10-1.c
*
* DESCRIPTION  :  
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
*                 1           2020-          LK       Start date
*
*
*******************************************************************************
*/

/*Inlämningsuppgift 9.2
  Undersöker om ett ord är en palindrom
  Therese Sahlgren
  2020-10-14*/
 
#include <stdio.h>
#include <string.h>
 
  int main(){
    //utskrift ber användaren skriva in ett ord
    printf("Skriv ett ord för att se om det är en palindrom: \n");
    char text[100], kopia[100];
    gets(text); //inläsning av ordet
 
     strcpy(kopia, text); //kopierar ordet i "text" till "kopia"
     //använder funktionen för att ändra ordet till baklänges i variabeln "kopia"
     strrev(kopia);
    
    if (strcmp (text,kopia)==0){ //jämför om de är likadana "text"+"kopia"
          //utskrift om orden är likadana
        printf("Det är en palindrom. Utskrift baklänges blir:\n%s", kopia);
    }
    else {
          //utskrift om orden är olika
        printf("Inte en palindrom. Utskrift baklänges blir:\n%s", kopia);
    }
    return 0;
  }