//Date        : 2020-12-11
//File        : sphere.h
//Description : Program calculate volume and area  of the sphere .
//Author      : Nataliya Lisjö

#ifndef OHM_CPP_O_H
#define OHM_CPP_O_H

#include <iostream>
using namespace std;

class Sphere
{
     private:  double Radius;
public:
    void setRadius(double radius);
    void getVolume();
    void getArea();
};

#endif //OHM_CPP_O_H
