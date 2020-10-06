#include <stdio.h>
int main(){
 /* Variabel typ 1 är lika 
 med sizeof i dettafall "char"
 skriver long long och long double
 med mellanslag*/
 int typ1 = sizeof(char);
 // Läser in typ 1
 scanf ("%d", &typ1);
 //Skriver ut typ1
 printf(" Antal bytes for char ar:%d\n" ,typ1);
 //Bara kopierat och gjort om.
 int typ2 = sizeof(short);
 scanf ("%d", &typ2);
 printf(" Antal bytes for short int ar:%d\n" ,typ2);
 
 int typ3 = sizeof(int);
 scanf ("%d", &typ3);
 printf(" Antal bytes for int ar:%d\n" ,typ3);
 
 int typ4 = sizeof(long);
 scanf ("%d", &typ4);
 printf(" Antal bytes for long inte ar:%d\n" ,typ4);
 
 int typ5 = sizeof(long long);
 scanf ("%d", &typ5);
 printf(" Antal bytes for long long int ar:%d\n" ,typ5);
 
 int typ6 = sizeof(float);
 scanf ("%d", &typ6);
 printf(" Antal bytes for float ar:%d\n" ,typ6);
 
 int typ7 = sizeof(double);
 scanf ("%d", &typ7);
 printf(" Antal bytes for double ar:%d\n" ,typ7);
 
 int typ8 = sizeof(long double);
 scanf ("%d", &typ8);
 printf(" Antal bytes for long double ar:%d\n" ,typ8);
 
 return 0;   
}