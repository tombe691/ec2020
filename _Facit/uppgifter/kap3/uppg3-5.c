 #include <stdio.h>
 #include <math.h>
 #define PI 3.141592653589793
 
 int main () {
   double a, b, v;
   printf("L�ngden f�r f�rsta sidan? ");
   scanf("%lf", &a);
   printf("L�ngden f�r andra sidan? ");
   scanf("%lf", &b);
   printf("Vinkeln mellan sidorna? ");
   scanf("%lf", &v);
   double gamma = v * 2 * PI / 360;  // omr�kning till radianer
   double c = sqrt(a*a + b*b - 2*a*b*cos(gamma));
   double e = 1e-10;  // ett litet tal
   if (fabs(a-b) < e && fabs(a-c) < e && fabs(b-c) < e)
     printf("Liksidig");
   else if (fabs(a-b) < e || fabs(a-c) < e || fabs(b-c) < e)
     printf("Likbent");
   else
     printf("Oliksidig");
}
