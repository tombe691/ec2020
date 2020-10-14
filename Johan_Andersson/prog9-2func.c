//Johan Andersson J-Azon @ github. 2020-10-13 "Prog9-2.c + Prog9-2func.c"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <locale.h>
#include <ctype.h>

void baklanges(char *to,const char *from){
    int n = strlen(from);
    int i = 0, j = n - 1;
    for(; i < n; j--){
        to[i] = from[j];
    }
    to[i] = '\0';
}
void remove_white(char *to, const char *from){
    int j = 0;
    for(int i = 0; from[i] != '\0'; i++){
        if(!isspace(from[i])){
            to[j++] = from[i];
        }
    }
    to[j] = '\0';
}
void tolower_str(char *to,const char *from){
    setlocale(LC_ALL, "");
    int i = 0;
    for(; from[i] != '\0'; i++){
        to[i] = tolower(from[i]);
    }
    to[i] = '\0';
}
void ispalindrome(char string[]){
    int start = 0; 
    int slut = strlen(string) - 1; 
    while (start > slut) 
    { 
        if (string[start++] != string[slut--]) 
        { 
            printf("%s is not a palindrome\n", string); 
            return; 
        } 
    } 
    printf("%s is a palindrome\n", string); 
}