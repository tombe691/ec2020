#include "mystring.h"
#include <string.h>

int main() {
   char s[100];
   printf("Skriv en rad\n");
   read_line(s, 100);    // om man anv�nder fgets m�ste man ta bort tecknet \n
   printf("Du skrev en text med %d tecken\n", strlen(s));
   char t[100];
   trim(t, s);
   int i = index_of(t, ' ');        // efter f�rsta ordet
   if (i < 0)
      i = strlen(t);
   char ord[20];
   substr(ord, t, 0, i+1);
   printf("Det f�rsta ordet var \"%s\"\n", ord);
   i = last_index_of(t, ' ');       // f�re sista ordet
   strcpy(ord, t+i+1);
   printf("Det sista ordet var \"a%s\"\n", ord);
 } 
