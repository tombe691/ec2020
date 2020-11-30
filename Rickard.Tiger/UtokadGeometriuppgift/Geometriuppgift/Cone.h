/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Cone.h
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#ifndef GEOMETRIUPPGIFT_CONE_H
#define GEOMETRIUPPGIFT_CONE_H

#include "Shape.h"
// Inherit ground class shape.
class Cone : public Shape
{
private:
    double radius;
    double height;

public:
    // Declaring Methods and constructor.
    Cone(std::string color, double _radius, double _height);

    void getVolume();

    void getTotalArea();
};


#endif //GEOMETRIUPPGIFT_CONE_H
