//==============================================================================
//Description   : Definitionsfil för funktionsbibliotek temperatur.
//Filename      : uppgift_7-2c.c
//Date          : 2020-10-06
//Author        : Leif Krüger, leif.kruger@gmail.com
//==============================================================================

#include <stdio.h>
#include "uppgift_7-2h.h"

static int tal_n, tal_n1 = 0, tal_n2 = 1; 

int fibonacci(void) {
   //Fibonacci formel tal_n = tal_n-1 + tal_n-2
   tal_n = tal_n1 + tal_n2; //Nästa tal summan av förgående två talen
   tal_n2 = tal_n1; //Flytta nästa sista talet ett steg bakåt
   tal_n1 = tal_n; //Flytta sista talet ett steg bakåt
   return tal_n; //Returnera efterfrågat tal i talföljden
}