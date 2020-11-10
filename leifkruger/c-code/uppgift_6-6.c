//==============================================================================
//Description   : Beräkna binomialkoefficinten, n över k.
//                Förklaring av bionomialkofficienter: 
//                Talet (n över k) är lika med antalet sätt man kan välja ut k 
//                stycken objekt ur en mängd av n objekt, utan hänsyn tagen till 
//                ordningsföljden.
//Filename      : uppgift_6-6.c
//Date          : 2020-10-03
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

 #include <stdio.h>

double nfak(int tal)
 {
   double produkt = 1;  //lokalvariabel
   for (int i=1; i<=tal; i++)
   {
   produkt *= i;
   }
   return produkt;
 }

double binomialk(int n, int k)
 {
   double produkt;  //lokalvariabel
   produkt = nfak(n)/(nfak(k)*nfak(n-k));
   return produkt;
 }
  
 int main () 
 {
   int n, k;
   printf("Beräknar binomialkoefficinten för (n över k).\n");
   printf("Ange ett positivt heltal n: ");
   scanf("%d", &n); 
   printf("Ange ett positivt heltal k: ");
   scanf("%d", &k);  
   //Anropa funktionen binomialk för beräkning av Binomialkoefficinten (n över k).
   printf("\nBinomialkoefficinten för n = %d och k = %d är: %.0lf ", n, k, binomialk(n, k));
   return 0;
}