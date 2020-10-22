 #include <stdio.h>
 int main () {
   printf("Miles per gallon? ");
   double milesPerGallon;
   scanf("%lf", &milesPerGallon);
   double literPerMil = 3.785/milesPerGallon/1.609*10;
   printf("%.2f l/mil\n", literPerMil);
 }

