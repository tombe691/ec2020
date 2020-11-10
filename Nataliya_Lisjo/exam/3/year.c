// File:  year.c
// Detta programett läser in ett årtal och undersöker om året är ett skottår.
// Version: 1.1
// Owner: Nataliya Lisjö
// -----------------------------------------------------
#include <stdio.h>

_Bool is_leapYear(int y);
int main(){ 
    int date;                            //variable År
    
    printf("Enter a year(YYYY) : ");     //fråga att skriva år
    scanf("%d", &date);                  //läsa in till variable "y"
    if(is_leapYear(date) ){              //undersöka om den tillhör till skottår   
      printf("It is leap year ");
    }    
    else  {
      printf("It is  not leap year ");
    }  

  return 0;
}
  _Bool is_leapYear(int y){               //funktion undersöka om den skottår med sanningvärde
      return ( y%4==0 && y%100!=0) ||( y%400==0 ); //vilkor       
  } 
