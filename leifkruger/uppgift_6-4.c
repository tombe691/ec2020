//==============================================================================
//Description   : Begärt pris av kund för att erhålla visst belopp efter skatt.
//Filename      : uppgift_6-4.c
//Date          : 2020-10-03
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#define MOMS 25.0 //Momssats i %.
#define ARB_AVG 28.97 //Egenavgift (arbetgivaravgift) i %.
#define STAT_LAG 0.0 //Statligskatt låginkomst.
#define STAT_MEDEL 20.0 //Statligskatt medelhög inkomst i %.
#define STAT_HOG 25.0 //Statligskatt hög inkomst i %.
#define LAG 1 //Inkomstnivå låg.
#define MEDEL 2 //Inkomstnivå medel hög.
#define HOG 3 //Inkomstnivå hög.

double x, kommunalSkatt, prisAttBegara;
int inkomstNiva;
 
double fskatteBerakning (double x, double kommunalSkatt, int inkomstNiva)
{
   double beraknatPris; //Lokalvariabel totalbelopp
   double statligSkatt; //Lokalvariabel aktuell statlig skatt
   double lon; //Lokalvariabel för lön.
   //Statligskattenivå
   if (inkomstNiva == LAG)
      statligSkatt = STAT_LAG;
   else if (inkomstNiva == MEDEL)
      statligSkatt = STAT_MEDEL;
   else
      statligSkatt = STAT_HOG;
   //Beräkning av lön
   lon = x/(1-0.01*(kommunalSkatt + statligSkatt));
   //Tillägg av egenavgifter på lön
   lon *= (1 + ARB_AVG/100);
   //Tillägg av moms
   lon *= (1+MOMS/100);
   beraknatPris = lon;
   return beraknatPris;
}

double main () 
{
   printf("Ange önskat belopp (vinst) efter skatt: ");
   scanf("%lf", &x); 
   printf("Ange aktuell kommunalskatt: ");
   scanf("%lf", &kommunalSkatt);
   printf("Ange inkomstnivå för beräkning av statlig skatt (låg ange 1, medel ange 2, hög ange 3): ");
   scanf("%d", &inkomstNiva);
   //Anrop för beräkning av begärt pris
   prisAttBegara = fskatteBerakning (x, kommunalSkatt, inkomstNiva);  
   printf("\nFör att erhålla vinsten %6.2lf kronor efter skatt måste man begära minst ett pris på %6.2lf kr inkl moms. \n", x, prisAttBegara);
   return 0;
}