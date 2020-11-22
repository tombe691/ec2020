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

bool Sphere::get_radius(float r)
{   // check for negative values
    if(r < 0)
    {
        return 0;
    }
    else
    {
        Sphere::set_radius(r);
        return 1;
    }

}

void Sphere::set_radius(float r)
{
        radius = r;
        Sphere::display();    
}

float Sphere::calculate_area()
{
    float area = (4 * PI * pow(radius,2));
    return (area); 
}

float Sphere::calculate_volume()
{
    double volume = ((4 * PI * pow(radius,3))/3);
    return(volume);
}


bool Box::get_box_data(float height,float width,float length)
{
    if((height < 0) || (width < 0) || (length < 0))
    {
        return 0;
    }
    else
    {
        Box::set_box_data(height,width,length);
        return 1;
    }   
}

void Box::set_box_data(float h,float w,float l)
{
        height = h;
        width = w;
        length = l;
        Box::display();    
}

float Box :: calculate_area()
{
    float area = ((2 * (height * width)) + (2 * (height * length)) + (2 * (width * length)));
    return(area);
}

float Box :: calculate_volume()
{
    float volume = length * width * height;
    return (volume); 
}

bool Cone::get_cone_data(float height,float radius)
{
    if((height < 0) || (radius < 0))
    {
        return 0;
    }
    else
    {
        Cone::set_cone_data(height,radius);
        return 1;
    }   
}

void Cone::set_cone_data(float h,float r)
{
        height = h;
        radius = r;
        Cone::display();    
}

float Cone :: calculate_area()
{
    float area = (PI * this->radius) * (this->radius + sqrt((pow(this->height,2)) + 
                 (pow(this->radius,2))));
    return(area);
}

float Cone :: calculate_volume()
{
    float volume = (((PI * pow(this->radius,2) * this->height))/3);
    return(volume);
}

void  Sphere :: display(void)
{
    std::cout << "The surface area of the sphere = "<< calculate_area() << std::endl;
    std::cout << "The volume of the sphere = "<< calculate_volume() << std::endl;
}

void Box :: display(void)
{
    std::cout << "The surface area of the box = "<< calculate_area() << std::endl;
    std::cout << "The volume of the box = "<< calculate_volume() << std::endl;
}

void Cone :: display(void)
{
    std::cout << "The surface area of the cone = "<< calculate_area() << std::endl;
    std::cout << "The volume of the cone = "<< calculate_volume() << std::endl;
}

