#include <stdio.h>
#include <ctype.h>
#include <string.h>

 int main() {

    FILE *infil = fopen("my_file.txt", "r");//oppna fil 
    int c;                       
   
   while ((c = fgetc(infil)) != EOF) //loppar "&c"teck i taget till end of file
   {
     if (c == '\t') // sök för vit teck
	    printf("   ");//skriva ut  3 melanslag istället
     else
        putchar(c);//utskriver varja char med "&c" adress
   }    
} 

