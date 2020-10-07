#include <stdio.h>
#include <math.h>
#include "Area.h"

// function to calculate area of rectangle

void area_rectangle()
{
    double length,breadth;

    printf("Enter length:\t");
    scanf("%lf",&length);
    printf("\nbreadth:\t");
    scanf("%lf",&breadth);

    printf("Area of rectangle= %0.2lf\n\n",length*breadth);

}

// function to calculate area of circle

void area_circle()
{
    double radius;
    printf("Enter the radius of the circle:\t");
    scanf("%lf",&radius);

    printf("\nArea of circle= %0.2lf\n\n",PI*pow(radius,2));

}

// function to calculate area of triangle
void area_triangle()
{
        double base, height;

    printf("Enter base:\t");
    scanf ("%lf",&base);
    printf("\nheight:\t");
    scanf("%lf",&height);

    printf("\nArea of triangle= %0.2lf\n\n",(base*height)/2);


}
