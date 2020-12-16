// File:  game_f.c
// Det är del av programm game.c
// Detta program är ”Sten, Sax och Påse” spel.
// Version: 1.1
// Owner: Nataliya Lisjö
// -----------------------------------------------------
#include <stdio.h>
#include <stdlib.h>


int tur(){
    int win=0;                             //wins calculator
    int comp;                              //computer play
    int enter=0;                           //user play

                                           //user select - nummer 
    while (!(enter==1|| enter==2||enter==3)){  
        printf("Select :");
        printf("\nRock-1\n Scissors-2\n Paper-3\n");
        scanf("%d",&enter);
    }    
    printf("Your choise: ");
    switch (enter){
    case 1 : printf("Rock");           break;
    case 2 : printf("Scissors");       break;
    case 3 : printf("Paper");          break;
    }

                          // data  generera siffra genom funktion rand() from stdlib.h
    comp = rand()%3;
    printf("\nComputer choise: ");      
    switch (comp){
    case 0 : printf("Rock");           break;
    case 1 : printf("Scissors");       break;
    case 2 : printf("Paper");          break;
    }

                          //wins calculator
    if(comp==enter)          {win = 0;};
    if(enter ==1 && comp==1) {win = 1;};
    if(enter ==1 && comp==2) {win = 2;};
    if(enter ==2 && comp==2) {win = 1;};
    if(enter ==2 && comp==0) {win = 2;};
    if(enter ==3 && comp==0) {win = 1;};
    if(enter ==3 && comp==1) {win = 2;};

                           //resultat
    printf("\nWho won: ");
    switch (win){
    case 0 : printf("0-0");            break;
    case 1 : printf("You won");        break;
    case 2 : printf("Computer won");   break;
    }
    return win;
}
