//==============================================================================
//Description   : Testfil for git.
//Filename      : tesfil_for_git.c
//Date          : 2020-10-06 
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

 #include <stdio.h>

_Bool fperfekttal(int tal)
 {
   int faktor = tal, sum = 0, resultat = 0;  //lokalvariabeler
   for (int i=1; i<tal; i++) //Stega igenom alla heltal (talet - 1).
   {
      if(faktor % i == 0) //Ta reda på faktorer och summera
      {
         sum += i;
      }
   }
   if (sum == tal) //Avgör om perfekt tal, om sant returnera 1
   {
        resultat = 1;
   }
   return resultat;
 }
  
 int main () 
 {
   int tal;
   printf("Ta reda på om ett tal är perfekt.\n");
   printf("Ange ett positivt heltal > 1: ");
   scanf("%d", &tal);  
   //Anropa funktionen fperfekttal för kontroll.
   if (fperfekttal(tal))
   {
      printf("\nTalet %d är ett sk perfekt tal.", tal);
   } 
   else
   {
      printf("\nTyvärr, talet %d är inte ett sk perfekt tal.", tal);
   }      
   return 0;
}