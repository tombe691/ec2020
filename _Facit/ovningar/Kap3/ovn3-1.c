 #include <stdio.h>
 int main () {
   printf("Minuter per månad? ");
   int min;
   scanf("%d", &min);
   printf("Pris per minut? ");
   double minutpris;
   scanf("%lf", &minutpris);
   double kostnad = min*minutpris;
   if (kostnad >= 1000)
     kostnad = kostnad - kostnad * 0.10;
   printf("Månadskostnad: %.2f", kostnad);
 }

