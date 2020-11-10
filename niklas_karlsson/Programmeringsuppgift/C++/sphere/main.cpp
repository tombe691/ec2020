#include <iostream>
#include "sphere.hpp"

using namespace std;

int main(void)
{
    Sphere newSphere;

    // gives the radius a value.
    newSphere.setRadius(5);
    // variables that retrieve values ​​from the class
    double volume = newSphere.getVolume();
    cout << "The Volume of the sphere is: " << volume << endl;

    Sphere newSphere2;
    // gives the radius a new value.
    newSphere2.setRadius(-3);
    volume = newSphere2.getVolume();
    cout << "The Volume of the sphere is: " << volume << endl;
}
