//==============================================================================
//Description   : Rapportera in uppmätt temperatur och tidpunkt.
//                Visa senast inrapporterad temperatur och tidpunkt.
//Filename      : uppgift_7-1.c
//Date          : 2020-10-07
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#include "uppgift_7-1_temp.h"

int main() {
int val; //Menyvariabel för att mata in nya värden eller rapportera senast värden
double t; //Temperatur
int h, m; //Timmar (h), minuter (m)
   while(1) {
      printf("\nTryck (1) mata in nya värden, (2) avläs senaste värden, ");
      printf("Avsluta (3). ");
      scanf("%d", &val);
      if (val == 1) {
         printf("\nAnge temperatur: ");
         scanf("%lf", &t);
         printf("\nAnge klockslag [hela timmar]: ");
         scanf("%d", &h);
         printf("\nAnge klockslag [hela minuter]: ");
         scanf("%d", &m);
         if (observation(t, h, m) == 0) {
            printf("\nVänligen kontrollera inrapporterade värden. \n "); 
            printf("Verkar ligga utanför rimligt värde.\n ");
         }
      } else if (val == 2) {
         t = aktuell_temp(); //Anropa temperatur
         h = obs_tim(); //Anropa timmar
         m = obs_min(); //Anropa minuter
         printf("\nSenast inrapporterade temperatur är %.2lf klockan %d:%d.\n ", t, h, m);
      }
      else {
         break;
      }
   }
}