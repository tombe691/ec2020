//Date        : 2020-12-11
//File        : o.cpp
//Description : Program calculate volume and area  of the sphere .
//Author      : Nataliya Lisjö

#include <iostream>
#include "o.h"
#define PI 3.14159
// Methods:
void Sphere::setRadius(double radius)
{
    Radius = radius;
}
void Sphere::getVolume()
{
    cout << "\n\t The volume of the sphere is: " <<  (4 * PI * Radius * Radius * Radius) / 3 << endl;
}
void Sphere::getArea()
{
    cout << "\n\t The area of the sphere is: " << 4 * PI * Radius * Radius << endl;
}