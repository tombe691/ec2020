#include "mystring.h"
#include <string.h>

int main() {
   char s[100];
   printf("Skriv en rad\n");
   read_line(s, 100);    // om man använder fgets måste man ta bort tecknet \n
   printf("Du skrev en text med %d tecken\n", strlen(s));
   char t[100];
   trim(t, s);
   int i = index_of(t, ' ');        // efter första ordet
   if (i < 0)
      i = strlen(t);
   char ord[20];
   substr(ord, t, 0, i+1);
   printf("Det första ordet var \"%s\"\n", ord);
   i = last_index_of(t, ' ');       // före sista ordet
   strcpy(ord, t+i+1);
   printf("Det sista ordet var \"a%s\"\n", ord);
 } 
