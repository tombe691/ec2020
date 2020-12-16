// File:  calc.c
// Detta program är ett litet ”kalkylator”-program, som kan hantera de fyra räknesätten för decimaltal.
// Version: 1.1
// Owner: Nataliya Lisjö
// -----------------------------------------------------
#include <stdio.h>
#include "calc.h"

int main() {    
   int yes;    
    do{             
        printf("Enter two digits(0.00):  ");    //fråga användare att skriva in 2-siffror värde
        double a, b;                            //declarera  variable "a" ,"b"
        scanf("%lf %lf",&a, &b);                //iniciera "a","b"

         int enter;
            // använfdare välja vilken operation ska göra
         while (!(enter==1|| enter==2||enter==3|| enter==4)){  
           printf("\n Select ,what will you do :");
           printf("\n add-1\n subtract-2\n miltiply-3\n divide-4\n");
           scanf("%d",&enter);
        }   
        printf("Your choise: ");
          switch (enter){
          case 1 : printf("add \n");           break;
          case 2 : printf("subtract \n");      break;
          case 3 : printf("miltiply \n");      break;
          case 4 : printf("divide \n");        break;
        }

       // anroppa olika funktion
        double res;
        if(enter ==1 ) { res = sum(a,b); };
        if(enter ==2 ) { res = minus(a,b); };
        if(enter ==3 ) { res = miltiply(a,b); };
        if(enter ==4 ) { res = divide(a,b); };
    
        printf("\n resultat %.2lf : ", res);
        fflush(stdin);
        printf("\n Do you want continue (Yes =1 /No )?  : ");
        scanf("%d",&yes);      
    }while( yes==1);                     // vilkor for upprepa programm
      if (yes !=1){
        printf("\n Programm  is closed ");       
      }
}            
    
