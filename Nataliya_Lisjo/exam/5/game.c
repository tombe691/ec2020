// File:  game.c
// Detta program är ”Sten, Sax och Påse” spel.
// Version: 1.1
// Owner: Nataliya Lisjö
// -----------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include "game.h"
int tur();
int main() {
    int k=0;               // ammount of game
    int w=0 ;              //  ammount of wins
    int lose=0;            // ammount of lost game
    int no_one=0;       
    int game=1;            //true condition
     
    while (game==1){       // play game while user tell no = 0
        int win = tur();   // funktion 
        k=k+1;             //summa of all played game
        if (win == 0)   {no_one=no_one+1; };
        if (win == 1)   {w=w+1; };
        if (win == 2)   {lose=lose+1; };
          
        printf("\nDo you want to play more? (Yes= 1/No =0)");
        scanf("%d",&game);
        }
        printf(" Total %d game\n", k);
        printf(" Win %d game\n", w);
        printf(" No one win %d game\n", no_one);
        printf(" Lose %d game\n", lose);
        printf(" Quit up , enter any key\n");
        getchar();    
}


