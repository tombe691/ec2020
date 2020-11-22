/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Box.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/

#include "Box.h" // Always big first letter for class.

//Constructor to get the private variables
Box::Box(std::string _color, double _height, double _length, double _width)
: Shape(_color), height(_height), length(_length), width(_width){}

//Overriding method.
double Box::getVolume()
{
    return length * width * height;
}
//Overriding method.
double Box::getArea()
{
return (length * width + length * height + width * height) * 2;
}
