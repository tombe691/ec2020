 #include <stdio.h>
 #define PI 3.141592653589793
 int main () {
   double r;
   printf("Radie? ");
   scanf("%lf", &r);     
   double v = 4*PI*r*r*r/3;
   double a = 4*PI*r*r;
   printf("Volym = %.2f\nArea  = %.2f\n", v, a);
 }


