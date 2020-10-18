double max(double a[], int n) {
  if (n == 1) 
    return a[0];
  else {
    double m = max(a, n-1);
    if (a[n-1] > m)
      return a[n-1];
    else
      return m;
   }
 }

 // Testprogram, ingick inte i övningen
 #include <stdio.h> 
 int main () {
   double b[100];
   int i = 0;
   while ((scanf("%lf", &b[i])) == 1)
     i++;
   double x = max(b, i);
   printf("Max = %f\n", x);
}