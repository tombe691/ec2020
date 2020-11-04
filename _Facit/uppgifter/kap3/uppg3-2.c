 #include <stdio.h>
 #define PI 3.141592653589793
 int main () {
   double r;
   printf("Radie? ");
   scanf("%lf", &r);
   if (r <= 0) {
     printf("Felaktig radie");
   }
   else {
     double omkr = 2 * PI * r;
     double area = PI * r * r;
     printf("Omkrets: %7.3f\n", omkr);
     printf("Area:    %7.3f\n", area);
   }
 }
