#include "sphere.hpp" // 'Sphere' has not been declared if not included

// Funtiond to get the volume
double Sphere::getVolume(void)
{
    // (4 ⋅ π ⋅ r3) / 3:
    return (4 * this->PI * pow(this->radius, 3)) / 3;
}

// Funtion to the the area
double Sphere::getArea(void)
{
    // 4 ⋅ π ⋅ r2:
    return (4 * this->PI * pow(this->radius, 2));
}
