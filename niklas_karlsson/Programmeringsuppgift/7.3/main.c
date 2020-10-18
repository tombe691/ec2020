/*
 * @Author: Niklas Karlsson
 * @Date: 2020-10-07
 * Copyright (c) 2020 Niklas Karlsson. All Rights Reserved.
 * The library is located in area.c / area.h
 * This file is just to visualize what is being done in the library
 * Compile:
 * gcc main.c area.c myprint.cddd
 */
#include "area.h"
#include "myprint.h"

// Main function
int main(void)
{
    // c = πr², t = (bh)/2, r = bh
    // getCircle is located within the myprint.c
    double *c = getCircle();
    // getTriangle is located within the myprint.c
    double *t = getTriangle();
    // getRectangle is located within the myprint.c
    double *r = getRectangle();

    // areaCircle is located within the area.h file
    printf("Circle area: %.2lf\n", areaCircle(c[0]));
    printf("Triangle area: %.2lf\n", areaRectangle(t[0], t[1]));
    printf("Rectangle area: %.2lf\n", areaRectangle(r[0], r[1]));

    return 0;
}
