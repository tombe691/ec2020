/*_______________________________________________
 Name		  : uppg9-2main.c
 Author	  	  : Eric Åshede
 Description  : Innehåller funktioner för indexberäkningar
 Date	  	  : 2020-10-12
_________________________________________________
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "uppg9-2funk.h"
#include "uppg9-2funk.c"

int main() {
	char string[100], copy[100];

	puts("Write a word or sentance to test if it's a palindrome \n");
	fgets(string, 100, stdin);
	
	strcpy(string, copy);
	remove_white(string, copy);
	backwards(copy, copy);
	tolower_str(string, copy);
	
	int compare = strcmp(string, copy);
		if(compare<0) {
			printf("%s is a palindrome!", string);
		}
		else {
			printf("%s is not a palindrome!", string);
		}

return 0;
} 