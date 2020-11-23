// File: box.hpp
// Summary: Class for Box
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "shape.hpp"

#ifndef BOX_H
#define BOX_H

class Box : public Shape
{
    public:
        Box(void);
        Box(double w, double h, double l);
        ~Box(void);
        double Area(void);
        double Volume(void);
        void Input(void);
    protected:
        double width;
        double height;
        double length;
};

#endif
