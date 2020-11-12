// File:  celsius.c
// Detta program gör om en temperatur angiven i Fahrenheit till Celsius.  
// Version: 1.1
// Owner: Nataliya Lisjö
// -----------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double convert(double frh);                        // declarera funktion
int main() {
   int yes; 
    do {        
        printf("Enter temperature in Fahrenheit:");//fråga användare att skriva in temperature i Fahrenheit
        double f;                                 //declarera  variable Fahrenheit  
        scanf("%lf", &f);                       //läsa in data till variable "f" 

        double c = convert(f);                    //anropa funktion och declarera variable "c"           
        if (c >= 15){
           printf("%.2lf degrees Celsius. We look forward to such days! ", c ); 
        }    
        else{
           printf("%.2lf degrees Celsius. Such days you want to stay inside! ", c );
        }
               fflush(stdin);
               
               printf("\n Do you want continue (Yes =1 /No )?  : ");
               scanf("%d",&yes);
      
    } while ( yes==1);                     // vilkor for upprepa programm
      if (yes !=1){
        printf("Programm  is closed ");
    }            
}
 double convert(double frh) {                     // definera funktion- omvandla Fahrenheit till Celsius
      return (frh-32)*5/9;                        //returera Celsium värde                     
 }

