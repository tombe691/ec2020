// File: sphere.hpp
// Summary: Class for Sphere
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#ifndef SPHERE_H
#define SPHERE_H

#include "shape.hpp"

class Sphere : public Shape
{
    public:
        Sphere(void);
        Sphere(double r);
        double Area(void);
        double Volume(void);
        void Input(void);
    protected:
        double radius;
};

#endif
