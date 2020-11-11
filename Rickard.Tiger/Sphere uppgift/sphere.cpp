/*
______________________________________________________________________________________
Date        : 2020-11-11
File        : sphere.cpp
Description : Do a sphere and calculate volume and area.
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/

#include <iostream>
#include <cmath>
#include "sphere.h"

// Important to have (classname::method).
// Sets radius, because radius is private.
void Sphere::setRadius(double radius1)
{
    radius = radius1;
}

// Method to get volume.
void Sphere::getVolume()
{
    cout << endl;
    cout << "The Volume of the sphere is: " << (4 * M_PI * radius * radius * radius) / 3 << endl;
}
// Method to get Area.
void Sphere::getArea()
{
    cout << endl;
    cout << "The Area of the sphere is: " << 4 * M_PI * radius * radius << endl;
}