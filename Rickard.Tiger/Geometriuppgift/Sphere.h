/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Sphere.h
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#ifndef GEOMETRIUPPGIFT_SPHERE_H
#define GEOMETRIUPPGIFT_SPHERE_H

#include "Shape.h"
// Inherit ground class shape.
class Sphere : public Shape
{
private:
    double radius;
public:
    // Declaring Methods and constructor.
    Sphere(std::string color, double _radius);

    double getVolume();

    double getArea();
};


#endif //GEOMETRIUPPGIFT_SPHERE_H
