/*
______________________________________________________________________________________
Date        : 2020-11-11
File        : sphere.h
Description : Do a sphere and calculate volume and area.
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/

#include <iostream>
using namespace std;
// Laying class in .h file.
class Sphere
{
// Makes radius private.
private:
    double radius;
public:
    void setRadius(double radius1);
    void getVolume();
    void getArea();
};