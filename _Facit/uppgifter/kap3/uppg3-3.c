 #include <stdio.h>
 int main () {
   printf("Postnummer? ");
   long int nr;
   scanf("%ld", &nr);
   nr = nr / 1000;
   if (nr>=20 && nr<=62 || nr==65 || nr==66)
     printf("Götaland");
   else if (nr>=80)
     printf("Norrland");
   else
     printf("Svealand");
 }
