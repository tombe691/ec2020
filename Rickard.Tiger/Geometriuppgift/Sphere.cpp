/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Sphere.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
// Include to get M_PI
#include <cmath>
// Including to get the declarations.
#include "Sphere.h"
//Constructor to get the private variables
Sphere::Sphere(std::string color, double _radius)
: Shape(color), radius(_radius) {}

//Overriding method.
double Sphere::getVolume()
{
    return (4 / 3) * M_PI * pow(radius, 3);
}

//Overriding method.
double Sphere::getArea()
{
    return 4 * M_PI * radius * radius;
}
