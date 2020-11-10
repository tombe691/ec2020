//==============================================================================
//Description   : Visa 1 om tal > 0, 0 om tal = 0 och -1 om tal < 0.
//Filename      : uppgift_6-1.c
//Date          : 2020-10-02
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

 #include <stdio.h>
 
 double fTaltecken (double tal)
 {
   double t; //lokalvariabel
   if (tal > 0)
      t = 1;
   else if (tal < 0)
      t = -1;
   else
      t = 0;
   return t;
 }
  
 int main () 
 {
   double tal;
   printf("\nAnge tal ");
   scanf("%lf", &tal);   
   //Anropa funktionen fTal och visa taltecken
   printf("\nTalet %.0f tillhör gruppen: %.0f \n", tal, fTaltecken(tal));   
   return(0);
}