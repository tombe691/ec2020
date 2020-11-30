//
// Created by Owner on 2020-11-19.
//

#ifndef GEOMETRIUPPGIFT_BOX_H
#define GEOMETRIUPPGIFT_BOX_H
#include "Shape.h"
// Inherit ground class shape.
class Box : public Shape
{
private:
    double height;
    double length;
    double width;

public:
    // Declaring Methods and constructor.
    Box(std::string _color, double _height, double _length, double _width);
    void getVolume();
    void getArea();


};


#endif //GEOMETRIUPPGIFT_BOX_H