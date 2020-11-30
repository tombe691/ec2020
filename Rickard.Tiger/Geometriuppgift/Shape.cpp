/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Shape.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
// Including to get the declarations.
#include "Shape.h"
// //Constructor to get the private variables
Shape::Shape(std::string _color) : color(_color){}
// Ground  method that will be overridden.
double Shape::getVolume()
{
    return 0;
}
// Ground  method that will be overridden.
double Shape::getArea()
{
    return 0;
}
// Method to get the color a string, this will not be initialized in other classes
// Since it is Inherit the method.
std::string Shape::getColor()
{
    return color;
}