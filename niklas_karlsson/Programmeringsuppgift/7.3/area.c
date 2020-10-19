/*
 * @Author: Niklas Karlsson
 * @Date: 2020-10-07
 * Copyright (c) 2020 Niklas Karlsson. All Rights Reserved.
 */
#include "area.h"

/*
 * Calculate the rectangle area
 */
double areaRectangle(double base, double height)
{
    // A = bh
    return base * height;
}

/*
 * Calculate the Circle area
 */
double areaCircle(double radius)
{
    // A = πr²
    return PI * radius * radius;
}

/*
 * Calculate the circle area
 */
double areaTriangle(double base, double height)
{
    // A = (bh)/2
    return base * height / 2;
}
