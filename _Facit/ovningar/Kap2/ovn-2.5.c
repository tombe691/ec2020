 #include <stdio.h>
 #define PI 3.141592653589793
 int main () {
   double r = 5;
   double omkr = 2 * PI * r;
   double area = PI * r * r;
   printf("Omkrets: %7.3f\n", omkr);
   printf("Area:    %7.3f\n", area);
 }