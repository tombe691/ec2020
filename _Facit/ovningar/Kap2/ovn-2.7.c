 #include <stdio.h>
 int main () {
   double l, b;
   printf("L�ngd? ");
   scanf("%lf", &l);
   printf("Bredd? ");
   scanf("%lf", &b);
   printf("Summa: %7.2f\n", 2 * l + 2 *b);
   printf("Area:  %7.2f\n", l * b);
 }