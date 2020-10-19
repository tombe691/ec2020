#include <stdio.h>
int main() {
 for (int x=-10; x<=10; x=x+1) {
   int f = 2*x*x - 5*x + 1;   
   printf("%3d %4d\n", x, f);
 }
}
