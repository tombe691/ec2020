 #include <stdio.h>
 int main () {
   printf("Pris f�r �rskort? ");
   double arskort;
   scanf("%lf", &arskort);
   printf("Pris f�r biljett? ");
   double biljett;
   scanf("%lf", &biljett);
   printf("Antal bes�k? ");
   int antal;
   scanf("%d", &antal);
   if (arskort < antal*biljett)
     printf("�rskort �r billigast\n");
   else
     printf("Biljetter �r billigast\n");
}

