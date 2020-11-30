// File: triangle.cpp
// Summary: How to calculate box with Shape class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "triangle.hpp"
using namespace std;    // Will generate error if not.

Triangle::Triangle(void)
{
}

Triangle::Triangle(double b, double h, double a) : base(b), height(h), altitude(a)
{
}

double Triangle::Area(void)
{
    // a = base
    // b = height
    // (h ⋅ b) / 2:
    return ((height * base) / 2);
}

double Triangle::Volume(void)
{
    // 0.5 ⋅ b ⋅ a ⋅ h:
    return (0.5 * base * altitude * height);
}

void Triangle::Input(void)
{
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter altitude: ";
    cin >> altitude;
}
