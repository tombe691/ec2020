// File: shape.hpp
// Summary: Class for Shape
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#ifndef SHAPE_H
#define SHAPE_H

#include <cmath>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <tuple>

using namespace std;
void listAll(void);

/*
 * polymorphism
 * << Abstract >>
 */
class Shape
{
    public:
        Shape(void);
        ~Shape(void);
        // Pure virtual function.
        virtual double Area() = 0;
        virtual double Volume() = 0;
        virtual void Input() = 0;
        void PrintVolume(void);
        void PrintArea(void);
        void listAll(void);
    // Can be called from the subclasses
    protected:
        // asin() returns the value of PI/2..
        double pi = 2 * asin(1.0);
        double Colour;
};

#endif
