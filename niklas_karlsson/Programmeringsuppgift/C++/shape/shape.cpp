// File: shape.cpp
// Summary: The base function 'shape' to use with subclasses.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "shape.hpp"
using namespace std;    // Will generate error if not.

Shape::Shape(void)
{
}

Shape::~Shape(void)
{
}

double Shape::Area()
{
    // Otherwise - warning: no return statement in function returning non-void
    return 0;
}
double Shape::Volume()
{
    // Otherwise - warning: no return statement in function returning non-void
    return 0;
}
void Shape::Input()
{
}

void Shape::PrintVolume(void)
{
    cout << "The Volume is: " << Volume() << endl;
}
void Shape::PrintArea(void)
{
    cout << "The Area is: " << Area() << endl;
}
