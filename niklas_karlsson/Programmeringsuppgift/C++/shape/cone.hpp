// File: cone.hpp
// Summary: Class for Cone
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "shape.hpp"

#ifndef CONE_H
#define CONE_H

class Cone : public Shape
{
    public:
        Cone(void);
        Cone(double r, double h);
        ~Cone(void);
        double Area(void);
        double Volume(void);
        void Input(void);
    protected:
        double radius;
        double height;
};

#endif
