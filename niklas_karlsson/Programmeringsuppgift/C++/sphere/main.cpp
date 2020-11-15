#include <iostream>
#include "sphere.hpp"

using namespace std;

int main(void)
{
    Sphere newSphere, newSphere2;

    // gives the radius a value.
    newSphere.setRadius(5);
    // variables that retrieve values ​​from the class
    double volume = newSphere.getVolume();
    double area = newSphere.getArea();
    cout << "The Volume of the sphere is: " << volume << endl
         << "And the Area of the sphere is: " << area << endl << endl;

    // gives the radius a new value.
    newSphere2.setRadius(-3);
    volume = newSphere2.getVolume();
    area = newSphere2.getArea();
    cout << "The Volume of the sphere is: " << volume << endl
         << "And the Area of the sphere is: " << area << endl;
}
