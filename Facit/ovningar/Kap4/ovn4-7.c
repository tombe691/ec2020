#include <stdio.h>
int main() {
  for (double x=-1; x<=1; x=x+0.1) {
    double f = 2*x*x - 5*x + 1;  
    printf("%4.1f %5.2f\n", x, f);
 }
}
