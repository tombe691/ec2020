// File: shape.cpp
// Summary: The base function 'shape' to use with subclasses.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "shape.hpp"

using namespace std;    // Will generate error if not.

/*
 * Constructor
 */
Shape::Shape(void)
{
}

/*
 * Destructor
 */
Shape::~Shape(void)
{
}

/*
 * Double type. Return something
 */
double Shape::Area()
{
    return 0;
}

/*
 * Double type. Return something
 */
double Shape::Volume()
{
    return 0;
}

/*
 * Void, no return here
 */
void Shape::Input()
{
}

/*
 * Print the stored volume
 */
void Shape::PrintVolume(void)
{
    cout << "The Volume is: " << Volume() << endl;
}

/*
 * Print the stored area
 */
void Shape::PrintArea(void)
{
    cout << "The Area is: " << Area() << endl;
}
