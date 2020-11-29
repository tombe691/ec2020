// File: rectangle.hpp
// Summary: Class for Rectangle
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.hpp"

class Rectangle : public Shape
{
    public:
        Rectangle(void);
        Rectangle(double w, double h, double l);
        double Area(void);
        double Volume(void);
        void Input(void);
    protected:
        double width;
        double height;
        double length;
};

#endif
