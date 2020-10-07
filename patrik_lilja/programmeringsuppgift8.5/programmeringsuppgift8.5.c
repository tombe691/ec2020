/*********************************************************************************
*                              Author: Patrik Lilja                              *
*                     File Name: programmeringsuppgift8.5.c                      *
*                    Creation Date: October 6, 2020 06:08 PM                     *
*                     Last Updated: October 6, 2020 07:20 PM                     *
*                               Source Language: c                               *
*          Repository: https://gitlab.com/IOTPL/iot-gbg-embedded-c.git           *
*                                                                                *
*                            --- Code Description ---                            *
*                           Programmeringsuppgift 8.5                            *
*********************************************************************************/

#include <stdio.h>
#include <Windows.h>

#include "sum.h"

int main()
{
    double vektor[100];                                     //Defined field with max 100 posts 
    double tempvalue;   
    int elementnumber = 0;                                  //For vektor[0]
    system("cls");                                          //clear screen
    printf("\n\nEnter a number of values, input is maximized to 100 values!\n");
    printf("\nIf you do not want to add more values press <Ctrl> + Z and <Enter> ?\n\n");
   
    while(1) {
            
            if (elementnumber>=100){                        //Prevents more than 100 inputs breaks whie loop
                printf("\nYou have now reach the maximum allowed numbers of inputs!");
                break;
            }
            printf("Enter value %d:  ", elementnumber + 1); 
            if (scanf("%lf", &tempvalue) != 1){              //Read input if input equals <Ctrl>+Z break while-loop
                break;    
            }
            vektor[elementnumber]=tempvalue;  
            elementnumber++;                                 //Counted this value entered and used for thenext vektor value  
    }
        system("cls");
        printf("You entered %d values\n\n", elementnumber);
        printf("\n\nThe sum of all entered values is %f\n", sum(vektor,elementnumber));    //Calculates the sum of all values
        printf("The sum of all kvadratic values of all entered numbers is %f\n\n", kvad_sum(vektor,elementnumber)); // Calculates the sum of all values^2 
        printf("This program will end in 5 seconds!");
        Sleep(5000);
        
}