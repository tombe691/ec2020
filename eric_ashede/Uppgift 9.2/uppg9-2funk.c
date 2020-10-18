#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <locale.h>
#include "uppg9-2funk.h"

void remove_white(char *to, const char *from) {
    int j = 0;
    for (int i =0; from[i] != '\0'; i++)
        if (!isspace(from[i]))
        to[j++] = from[i];
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

void backwards(char *s1, const char *s2) {
    int n = strlen(s2);
    int i = 0, j = n-1;
    for (; i < n; i++, j--)
        s1[i] = s2[j];
        s1[i] = '\0';
}