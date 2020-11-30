/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Shape.h
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#ifndef GEOMETRIUPPGIFT_SHAPE_H
#define GEOMETRIUPPGIFT_SHAPE_H
// To get method getColor
#include <string>
// Creates a class named Shape, with its all methods and variables.
class Shape
{
private:
    std::string color;
public:
    //Constructor to get color above, since it private.
    Shape(std::string _color);

    void getVolume();

    void getArea();

    void getColor();
};


#endif //GEOMETRIUPPGIFT_SHAPE_H
