 #include <stdio.h>
 int main () {
   printf("Antal minuter per månad? ");
   int min;
   scanf("%d", &min);
   if (min  <= 33)
     printf("Välj Kontant");
   else if (min > 33 && min  <= 66)
     printf("Välj Normal");
   else
     printf("Välj Plus"); 
 }
