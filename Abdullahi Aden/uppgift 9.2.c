#include <stdio.h>
#include <string.h>
 /* F�rfattare:Abdullahi Aden.
    Datum 202.10.12.
    Anledning: uppgift 9.2 om palindrome.*/
 
int main()
{
    char string[2000];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    scanf("%d",string);
    
    //kollar hur l�ng �r stringan.
    n=strlen(string);
 
    for(i=0;i<n/2;i++)  
    {
    	if(string[i]==string[n-+i-1])
    	c++;
 
 	}
 	//Om stringen lir 0 d� �r palindrome.
 	if(c==0)
 	    printf("string is palindrome");
 	    
 	//Annars om stringen inte blir 0 d� �r inte palindrome.
    else
        printf("string is not palindrome");
 
 	 
     
    return 0;
     
}
