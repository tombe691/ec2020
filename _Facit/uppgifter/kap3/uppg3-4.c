 #include <stdio.h>
 int main () {
   printf("Skriv 0 om du �r tjej och 1 om du �r kille? ");
   int k;
   scanf("%d", &k);
   printf("Ditt personnummer (utan minus)? ");
   long long int nr;
   scanf("%lld", &nr);
   nr = nr / 10;
   if (k == 0 && nr%2 == 0 || k == 1 && nr%2 == 1)
     printf("St�mmer");
   else 
     printf("St�mmer inte");
 }
