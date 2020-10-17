 #include <stdio.h>
 #define PI 3.141592653589793
 double omkrets(double r) {
   return 2 * PI * r;
 }
 
 double area(double r) {
   return PI * r * r;
 }
  
 int main () {
   double radie;
   printf("Radie? ");
   scanf("%lf", &radie);
   printf("Omkrets: %7.3f\n", omkrets(radie));
   printf("Area:    %7.3f\n", area(radie));
 }