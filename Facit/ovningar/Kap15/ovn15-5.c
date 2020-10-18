#include <stdio.h> 
 int main () {
   unsigned  int i;
   scanf("%x", &i);
   if (i & 0x4) {
     i = i & 0xfffb;
     i = i | 0x1;
   }
   printf("%x", i);   
}