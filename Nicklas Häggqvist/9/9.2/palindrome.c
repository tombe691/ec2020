#include <string.h>
#include <Ctype.h>
#include <locale.h>
#include "palindrome.h"

_Bool ispalindrome(const char *word){
	int start = 0;
	int end = strlen(word) - 1;
	while(start <= end){
		if(word[start++] != word[end--])
			return 0;
	}
	return 1;
}

void remspc(char *to, const char *from){
	int j = 0; 
	for(int i = 0; from[i] != '\0'; i++){
		if(!isspace(from[i]))
			to[j++] = from[i];
	}
	to[j] = '\0';
}

void tolwr(char *to, const char *from){
	setlocale(LC_ALL, "");
	int j = 0;
	for(int i = 0; from[i] != '\0'; i++){
		to[j++] = tolower(from[i]);	
	}
	to[j] = '\0';
}
