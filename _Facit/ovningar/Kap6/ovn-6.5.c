 #include <stdio.h>
 
 _Bool ar_kvinna(long long int nr) {
   nr = nr / 10;
   return nr % 2 == 0;
 }
 
 int main () {
   printf("Skriv 0 om du �r tjej och 1 om du �r kille? ");
   int k;
   scanf("%d", &k);
   printf("Ditt personnummer (utan minus)? ");
   long long int nr;
   scanf("%lld", &nr);
   if (k == 0 && ar_kvinna(nr) || (k == 1 && !ar_kvinna(nr)))
     printf("St�mmer");
   else 
     printf("St�mmer inte");
 }
