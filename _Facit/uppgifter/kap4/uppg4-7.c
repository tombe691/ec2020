#include <stdio.h>
#include <math.h>
int main() {
  printf("Antal domare? ");
  int n = 0;
  scanf("%d", &n);
  if (n < 3)
	 printf("Felaktigt antal domare!");
  else {	   
    while(1) {
      printf("Hoppets svårighetsgrad? ");
      double svarighet;
      if (scanf("%lf",&svarighet) != 1)  
         break;
      double sum = 0;
      double min_poang=10;
      double max_poang=0;
      double domar_poang;
	   int i;
	   for (i = 1; i <= n; i++)  {
         printf("Ange poängen från domare nr %d: ", i);
         if (scanf("%lf",&domar_poang) != 1)  
           break;
         sum = sum + domar_poang;
         max_poang = fmax(max_poang, domar_poang);
         min_poang = fmin(min_poang, domar_poang); 
       }		 
       if (i == n+1) {  // har alla domarpoängen läst in?
         sum = sum - max_poang - min_poang;
         double hopp_poang = sum / (n-2) * 3 * svarighet;
         printf("Hoppets poäng: %8.3f\n", hopp_poang);
       }
       else 
         printf("Domarpoäng saknas\n");
     }
   }  
}
