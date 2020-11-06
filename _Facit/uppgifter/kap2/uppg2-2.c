 #include <stdio.h>
 int main () {
   printf("Temperatur i Fahrenheit? ");
   double f;
   scanf("%lf", &f);
   double c = (f-32)*5/9;
   printf("Motsvarar %.2f grader C", c);
}
            
