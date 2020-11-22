//=====================================================================
//Filename      : Sphere.cpp
//Description   : Contains functions definitions of class shape,
//                sphere,box and cone.
//Version       : 1.0
//Date          : 2020-17-11
//Author        : Madhavi Nair,madhavianair@gmail.com
//=====================================================================

# include <iostream>
# include <cmath>
# include "Shape.h"

float Sphere :: calculate_area(void)
{
    float area = (4 * PI * pow(radius,2));
    return (area); 
}

float Sphere :: calculate_volume(void)
{
    double volume = ((4 * PI * pow(radius,3))/3);
    return(volume);
}

void  Sphere :: display(void)
{
    std::cout << "The surface area of the sphere = "<< calculate_area() << std::endl;
    std::cout << "The volume of the sphere = "<< calculate_volume() << std::endl;
}

float Cone :: calculate_area(void)
{
    float area = (PI * this->radius) * (this->radius +
                 sqrt((pow(this->height,2)) +
                 (pow(this->radius,2))));
    return (area);
}

float Cone :: calculate_volume(void)
{
    double volume = (((PI * pow(this->radius,2) *
                        this->height))/3);
    return(volume);
}

void  Cone :: display(void)
{
    std::cout << "The surface area of the sphere = "<< calculate_area() << std::endl;
    std::cout << "The volume of the sphere = "<< calculate_volume() << std::endl;
}

float Box :: calculate_area(void)
{
    float area = ((2 * (height * width)) + (2 * (height * length))
                  + (2 * (width * length)));
    return (area);
}

float Box :: calculate_volume(void)
{
    double volume = (this->length) * (this->width) *
                    (this->height);
    return(volume);
}

void  Box :: display(void)
{
    std::cout << "The surface area of the sphere = "<< calculate_area() << std::endl;
    std::cout << "The volume of the sphere = "<< calculate_volume() << std::endl;
}




