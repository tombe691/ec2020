/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Sphere.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include <iostream>
// Include to get M_PI
#include <cmath>
// Including to get the declarations.
#include "Sphere.h"
//Constructor to get the private variables
Sphere::Sphere(std::string color, double _radius)
: Shape(color), radius(_radius) {}

//Overriding method.
void Sphere::getVolume()
{
    std::cout <<"Volume of Sphere is: "<< (4 / 3) * M_PI * pow(radius, 3) <<std::endl;
}

//Overriding method.
void Sphere::getArea()
{
    std::cout <<"Area of Sphere is: "<< 4 * M_PI * radius * radius <<std::endl;
}
