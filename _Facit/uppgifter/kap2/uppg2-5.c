 #include <stdio.h>
 #include <math.h>
 int main () {
   printf("Antal �r? ");
   int t;
   scanf("%d", &t);
   double lambda = log(2.0)/5730;
   double n0 = 100;  // 100 %
   double rest = n0 * exp(-lambda*t);
   printf("Det �terst�r %.1f procent", rest);
}

