//==============================================================================
//Description   : Beräkna pris inkl moms. Ange pris exkl moms + momssats i %.
//Filename      : uppgift_6-2.c
//Date          : 2020-10-02
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

 #include <stdio.h>
 
 double fPrisInklmoms (double prisExklmoms, double momssats)
 {
   return prisExklmoms * (momssats/100 +1);
 }
  
 int main () 
 {
   double prisExklmoms, momssats; //prisExklmoms i kronor, momsats i %
   printf("\nAnge pris exkl moms ");
   scanf("%lf", &prisExklmoms);
   printf("\nAnge momssats i procent (ange ev. med decimalpunkt)");
   scanf("%lf", &momssats);   
   //Anropa funktionen fPrisInklmoms som lägger på momsen
   printf("\nPriset inkl moms blir: %6.2f kr.\n", fPrisInklmoms(prisExklmoms, momssats));   
   return(0);
}