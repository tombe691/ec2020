// File: box.cpp
// Summary: How to calculate box with Shape class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include "box.hpp"
using namespace std;    // Will generate error if not.

Box::Box(void)
{
}

Box::Box(double w, double h, double l) : width(w), height(h), length(l)
{
}

Box::~Box(void)
{
}

double Box::Area(void)
{
    // 2 ⋅ (h ⋅ W) + 2 ⋅ (h ⋅ L) + 2 ⋅ (W ⋅ L)
    return ((2 * (height * width)) + (2 * (height * length)) +
           (2 * (width * length)));
}

double Box::Volume(void)
{
    // W ⋅ h ⋅ L
    return width * height * length;
}

void Box::Input(void)
{
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter length: ";
    cin >> length;
}
