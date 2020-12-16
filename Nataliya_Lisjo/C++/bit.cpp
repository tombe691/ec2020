//
// Created by Nataliya on 11/30/2020.
//

#include <stdio.h>
#define FIRST_BIT  (0x1) //1 bit         //11010000
#define SECOND_BIT (0x2 )//2  //13 port
#define THIRD_BIT (0x4)  //4  //12
#define FOURTH_BIT (0x8) //8  //11
#define FIFTH_BIT (0x16) //16  //10
#define SIXTH_BIT (0x32) //32  // 9
#define SEVENTH_BIT (0x64) //64  //8
#define EIGTH_BIT (0x128)  //128  //7


int main(void)
{
/* Increase by for each bit, *2 each time,
   0x prefix means they're specified via a hex value */

    int x2 = FIRST_BIT | THIRD_BIT | FOURTH_BIT;
    printf("x2 %d\n", x2);
    int isSet = x2&SECOND_BIT;
    printf("isset %d\n", isSet);

    if (x2 & FIRST_BIT) {
        printf("1 is set \n");
    }
    if (x2&SECOND_BIT) {
        printf("2 is set \n");
    }
    if (x2&THIRD_BIT) {
        printf("3 is set \n");
    }
    if (x2&FOURTH_BIT) {
        printf("4 is set \n");
    }
    if (x2&FIFTH_BIT) {
        printf("5 is set \n");
    }
    if (x2&SIXTH_BIT) {
        printf("6 is set \n");
    }
    if (x2&SEVENTH_BIT) {
        printf("7 is set \n");
    }
    if (x2&EIGTH_BIT) {
        printf("8 is set \n");
    }
  int c = x2 <<1;
    printf("c 14%d\n", c )
    return 0;
}
