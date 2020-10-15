
#include <stdio.h>
#include <string.h>

//den funktion tabort mellanslag from text
void remove_space(char *str){
  for(int i = 0; i < strlen(str); i++){
      if (str[i] == ' ') {
         memcpy(&str[i], &str[i+1], strlen(str) - i - 1);
        str[strlen(str) - 1] = 0;
      }
   }
}

//den funktion bytar stor bockstav till smo i text:
void tolower_str(char *to, const char *from){                                          
    int i = 0;
    for (; from[i] !='\0'; i++)
         to[i]=tolower(from[i]);
    to[i]='\0';  
   
}

