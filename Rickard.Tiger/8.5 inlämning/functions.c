/*
______________________________________________________________________________________
Date        : 2020-10-05
File        : functions.c
Description : Göra 2 funktioner och lägga in för bibliotek
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
//Funktion för att få fram nummren i arrayen
#include<stdio.h>
#include "functions.h"// Kom ihåg att alltid inkludera .h filen

double sum(double array[],int nummer) {
   double summa = 0;
   for(int i=0; i<nummer; i++)
      {
         summa += array[i];//gör att man plussar på arrayen
      }
 	return summa;
}

double kvad_sum(double array[], int number) {
   double kvad_sum=0;//Variabel att göra uträkning och lägga returen i.
   for (int i = 0; i <number; i++)
   {
      kvad_sum += array[i] * array[i]; //Kvadratroten är värdet*värdet
   }
   return kvad_sum;
}