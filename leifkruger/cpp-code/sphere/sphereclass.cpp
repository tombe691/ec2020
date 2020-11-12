#include <iostream>
#include <cmath>
#include "sphereclass.h"

void sphere::setRadius(double inputRadius) {
    radiusSphere = inputRadius;
}
void sphere::getVolume() {
    cout << "The Volume of the sphere is: " 
		<< (4 * M_PI * radiusSphere * radiusSphere * radiusSphere) / 3  
		<< " volume units."  << endl;
}
void sphere::getArea() {
    cout << "The Area of the sphere is: " 
		<< 4 * M_PI * radiusSphere * radiusSphere  << " area units."  << endl;
}