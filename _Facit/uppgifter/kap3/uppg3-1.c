 #include <stdio.h>
 int main () {
   printf("Antal minuter per m�nad? ");
   int min;
   scanf("%d", &min);
   if (min  <= 33)
     printf("V�lj Kontant");
   else if (min > 33 && min  <= 66)
     printf("V�lj Normal");
   else
     printf("V�lj Plus"); 
 }
