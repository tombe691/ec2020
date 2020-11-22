/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Cone.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
// Including cmath to use M_PI.
#include <cmath>
// Including to get the declarations.
#include "Cone.h"

//Constructor to get the private variables.
Cone::Cone(std::string color, double _radius, double _height)
: Shape(color), radius(_radius), height(_height) {}

//Overriding method.
double Cone::getVolume()
{
    return M_PI * radius * radius * height;
}
//Overriding method.
double Cone::getTotalArea()
{
    double slantHeight = sqrt(height) * height + radius * radius;
    return M_PI * radius * slantHeight;
}