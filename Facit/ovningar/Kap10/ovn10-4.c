#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main() {
 FILE *infil = open_file("Loggfilens namn?", "r");
 char s[100];
 char namn[30];
 int maxtid = 0;
 while (fread_line(s, 100, infil)) {
   char str[30];  
   int tid, sum = 0, i, k; 
   sscanf(s, "%s%n", str, &i);  
   while(sscanf(s+i, "%d%n", &tid, &k) == 1) {
     sum = sum + tid;
	 i = i + k;
   }
   if (sum >= maxtid) {
     maxtid = sum;
	 strcpy(namn, str);
   }
 }
 printf("%s har varit inloggad %d minuter\n", namn, maxtid);
}