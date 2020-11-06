 #include <stdio.h>
 int main () {
   int l, b, t;
   printf("Längd (mm)? ");
   scanf("%d", &l);
   printf("Bredd (mm)? ");
   scanf("%d", &b);
   printf("Tjocklek (mm)? ");
   scanf("%d", &t);
   if (l >= 140 && l <= 600 && b >= 90 && t <= 100 && b+l+t <= 900)
     printf("Måtten OK");
   else 
     printf("Felaktiga mått");
 }
