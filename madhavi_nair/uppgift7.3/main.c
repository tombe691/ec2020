//==============================================================================
//Description   : Calculate Area of rectangle, circle and triangle.
//Filename      : uppgift_7.3.c
//Date          : 2020-10-07
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================

#include <stdio.h>
#include "Area.h"

int main()
{
    int choice=9;

    while(choice!=0)
    {
        // To make a choice
        printf("calculate area of:\n");
        printf("Rectangle: Enter=1\n");
        printf("Circle:Enter=2\n");
        printf("Triangle: Enter=3\n");
        printf("Exit: Enter= 0\n");
        scanf("%d",&choice);
    //To exit the program
        if(choice == 0)
            break;

        // To call the relevant function to calculate area
        switch(choice)
            {
                case 1:
                    area_rectangle();
                    break;
                case 2:
                    area_circle();
                    break;
                case 3:
                    area_triangle();
                    break;
                default:
                    printf("Incorrect option chosen\n");
                    break;
            }

    }

    return 0;
}
