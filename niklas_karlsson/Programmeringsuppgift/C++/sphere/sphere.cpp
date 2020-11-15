#include "sphere.hpp" // 'Sphere' has not been declared if not included

// Funtio to get the volume
double Sphere::getVolume(void)
{
    return (4 / 3) * this->PI * pow(this->radius, 3);
}

// Funtion to the the area
double Sphere::getArea(void)
{
    return (4 * this->radius) * this->PI * pow(this->radius, 2);
}
