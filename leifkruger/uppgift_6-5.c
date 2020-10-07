//==============================================================================
//Description   : Utskrift av multipikationstabell.
//Filename      : uppgift_6-5.c
//Date          : 2020-10-03
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

 #include <stdio.h>

void fmultiplikationstabell(int tal)
 {
   int siffra = tal; //lokalvariabel
   for (int k=1; k<=10; k++)
   {
   //Använd variablen k för både rad och beräkning
      printf("%3d %3d\n", k, k * siffra);
   }
 }
  
 int main () 
 {
   int tal;
   printf("Ange ett heltal mellan 1 och 10: ");
   scanf("%d", &tal);   
   //Anropa funktionen fmultipikationstabell och visa om tabellen
   fmultiplikationstabell(tal);
   return 0;
}