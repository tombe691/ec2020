#include <stdio.h>
int main(){
    //Variabler
    int tal1, tal2;
    //Skriver ut tal nr1
    printf("Tal nr 1 ");
    //läser in tal 1
    scanf("%d", &tal1);
    //Skriver ut tal nr2
    printf("Tal nr 2 ");
    //läser in tal2
    scanf("%d", &tal2);
    //Variabler som räknar ut summan direkt(Ger värde direkt)
    int resultat =tal1 + tal2, skillnad =tal1 - tal2;
    //Skriver ut resultatet
    printf("Resultatet blir:%d\n", resultat);
    //Skriver ut skillnaden
    printf("Skillnaden blir:%d\n", skillnad);
    return 0;
}