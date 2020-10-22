 #include <stdio.h>
 int main () {
   int tal1, tal2;
   printf("Det första talet? ");
   scanf("%d", &tal1);
   printf("Det andra talet ");
   scanf("%d", &tal2);
   printf("Summa:    %d och %d\n", tal1 + tal2, 10 + 44);
   printf("Skillnad: %d\n", tal1 - tal2);
 }