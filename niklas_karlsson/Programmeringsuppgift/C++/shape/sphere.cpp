// File: sphere.cpp
// Summary: How to calculate rectangle with Shape class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "sphere.hpp"
using namespace std;    // Will generate error if not.

Sphere::Sphere(void)
{
}

Sphere::Sphere(double r) : radius(r)
{
}

double Sphere::Area(void)
{
    // 4 ⋅ π ⋅ r2:
    return (4 * pi * pow(radius, 2));
}

double Sphere::Volume(void)
{
    // (4 ⋅ π ⋅ r3) / 3:
    return (4 * pi * pow(radius, 3)) / 3;
}

void Sphere::Input(void)
{
    cout << "Enter radius: ";
    cin >> radius;
}
