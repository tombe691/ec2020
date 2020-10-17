//upg 9.2 -undersöker om texten är palindrom
// Nataliya Lisjo. 15.10.2020
--------------------------------------
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "palindrom.h"

//testa

int main(){
    char str[80];    
    printf("Skriv texten : \n");
    scanf("%80s",&str);
       remove_space(str);
       tolower_str(str,str);
     
    int i = 0, k;             
    int length = strlen(str)-1;                      // räckna texten längth, spara length
 
    int chek = 1;                                  
    for (i=0, k=length-1; i<k && chek>0; i++, k--)  // kolla first och sista bockstav
        if (str[i] != str[k]) chek = 0;            // om inte lika med - false
 
    
     if(chek > 0) 
                printf("Texten ar palindrome %s ", str);   
      else
                printf("Texten ar inte palindrome %s ",str );     
    return 0;
}

