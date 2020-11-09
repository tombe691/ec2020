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
      printf("Hoppets sv�righetsgrad? ");
      double svarighet;
      if (scanf("%lf",&svarighet) != 1)  
         break;
      double sum = 0;
      double min_poang=10;
      double max_poang=0;
      double domar_poang;
	   int i;
	   for (i = 1; i <= n; i++)  {
         printf("Ange po�ngen fr�n domare nr %d: ", i);
         if (scanf("%lf",&domar_poang) != 1)  
           break;
         sum = sum + domar_poang;
         max_poang = fmax(max_poang, domar_poang);
         min_poang = fmin(min_poang, domar_poang); 
       }		 
       if (i == n+1) {  // har alla domarpo�ngen l�st in?
         sum = sum - max_poang - min_poang;
         double hopp_poang = sum / (n-2) * 3 * svarighet;
         printf("Hoppets po�ng: %8.3f\n", hopp_poang);
       }
       else 
         printf("Domarpo�ng saknas\n");
     }
   }  
}
