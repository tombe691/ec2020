 #include <stdio.h>
 int main () {
   printf("Minuter per m�nad? ");
   int min;
   scanf("%d", &min);
   printf("Pris per minut? ");
   double minutpris;
   scanf("%lf", &minutpris);
   double kostnad = min*minutpris;
   if (kostnad >= 1000)
     kostnad = kostnad - kostnad * 0.10;
   printf("M�nadskostnad: %.2f", kostnad);
 }

