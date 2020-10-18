#include <stdio.h>
 
int main() {
   int t1, t2, m1, m2;
   char punkt;
   printf("Starttid (tt.mm)? ");
   scanf("%d%c%d", &t1, &punkt, &m1);
   printf("Sluttid  (tt.mm)? ");
   scanf("%d%c%d", &t2, &punkt, &m2);
   int n1 = t1 * 60 + m1;    
   int n2 = t2 * 60 + m2; 
   if (n2 < n1)
     n2 = n2 + 60*24;	   
   printf("Tidsintervall: %d minuter\n", n2-n1);
 } 


