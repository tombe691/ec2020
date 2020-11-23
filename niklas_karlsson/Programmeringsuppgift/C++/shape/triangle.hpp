// File: triangle.hpp
// Summary: Class for Triangle.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.hpp"

class Triangle : public Shape
{
    public:
        Triangle(void);
        Triangle(double b, double h, double a);
        double Area(void);
        double Volume(void);
        void Input(void);
    protected:
        double base;
        double height;
        double altitude;
};

#endif
