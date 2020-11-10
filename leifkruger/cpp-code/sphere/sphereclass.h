#ifndef SPHERE_SPHERECLASS_H
#define SPHERE_SPHERECLASS_H

#include <iostream>
#include <cmath>

using namespace std;

class sphere {
private:
    double radiusSphere;
public:
    void setRadius(double inputRadius);
    void getVolume();
    void getArea();
};

#endif //SPHERE_SPHERECLASS_H