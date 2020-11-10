#include "sphere.hpp" // 'Sphere' has not been declared if not included

void Sphere::setRadius(double radius)
{
    this->radius = radius;
}

double Sphere::getVolume(void)
{
    return (4 / 3) * this->PI * pow(this->radius, 3);
}
