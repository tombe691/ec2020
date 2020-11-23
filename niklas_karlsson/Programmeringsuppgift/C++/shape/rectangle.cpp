// File: rectangle.cpp
// Summary: How to calculate rectangle with Shape class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "rectangle.hpp"
using namespace std;    // Will generate error if not.

Rectangle::Rectangle(void)
{
}

Rectangle::Rectangle(double w, double h, double l) : width(w), height(h), length(l)
{
}

double Rectangle::Area(void)
{
    // a = width
    // b = length
    // w ⋅ l:
    return (width  * length);
}

double Rectangle::Volume(void)
{
    // a = radius
    // b = height
    // l ⋅ w ⋅ h:
    return (length * height * length);
}

void Rectangle::Input(void)
{
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter length: ";
    cin >> length;
}
