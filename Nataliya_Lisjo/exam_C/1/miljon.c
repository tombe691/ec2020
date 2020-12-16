// File: miljon.c
// Detta program   beräknar och skriver ut hur många dagar det behövs för att bli 
// miljonär om man varje dag får dubbelt så mycket som dagen innan. Den första dagen får
// man en krona.   
// Version: 1.1
// Owner: Nataliya Lisjö
// -----------------------------------------------------
#include <stdio.h>
#define GRANS 1000000              //constant

int multiply(int x);               // declarera funktion
int sum(int y, int x);
int main() {
    int dag = 1, m = 1, total = 0; //antal dags/sparade kron per dag-from 1/total sparade     
    while (total<=GRANS){          //vilkor,loopa till summan ska vara 1000000
        dag++;                     //starta från första dag och går up +1 dag
        m  = multiply(m);          //summa sparade en dag /anropa funk.multiply
        total = sum( total, m);    //summa sparade total /anropa funk.sum
        printf(" %d ", total);     //skriva ut summa av per dag         
    }      
    printf("\n Du sparade %d kron i %d dagar", total, dag);  
}
int multiply(int x){
    return x*2;
}
int sum(int y, int x){
    return y+x;
}