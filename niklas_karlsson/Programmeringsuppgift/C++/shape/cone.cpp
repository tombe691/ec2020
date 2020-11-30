// File: cone.cpp
// Summary: How to calculate cone with Shape class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "cone.hpp"
using namespace std;    // Will generate error if not.

Cone::Cone(void)
{
}

// Pass variable r to radius and h to height.
Cone::Cone(double r, double h) : radius(r), height(h)
{
}

Cone::~Cone(void)
{
}

double Cone::Area(void)
{
    // a = radius
    // b = height
    // π ⋅ r ⋅ (r + sqrt(h^2 + r^2)):
    return (pi * radius *
        (radius + sqrt(pow(height, 2) + pow(radius, 2))));
}

double Cone::Volume(void)
{
    // a = radius
    // b = height
    // π ⋅ r^2 ⋅ (h / 3):
    return (pi * pow(radius, 2) * (height / 3));
}

void Cone::Input(void)
{
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
}
