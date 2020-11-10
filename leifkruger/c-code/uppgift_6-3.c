//==============================================================================
//Description   : .
//Filename      : uppgift_6-3.c
//Date          : 2020-10-02
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

 #include <stdio.h>
 
 _Bool primtal (int tal)
 {
   int primtal = tal; //lokalvariabel
   for (int k=2; k<tal; k++)
   {
      if(primtal % k == 0)
         primtal = 0;
   }
   return primtal;
 }
  
 int main () 
 {
   int tal;
   printf("Ange tal (> 0): ");
   scanf("%d", &tal);   
   //Anropa funktionen primtal och visa om talet är ett primtal
   if (primtal(tal))
   {
      printf("\nTalet %d är ett primtal. \n", tal);
   } else {
      printf("\nTalet %d är inte ett primtal. \n", tal);
   }
   return 0;
}