//=====================================================================
//Filename      : Shape.h
//Description   : Contains declarations of a class and functions used
//                shape program.
//Version       : 1.0
//Date          : 2020-11-11
//Author        : Madhavi Nair,madhavianair@gmail.com
//=====================================================================

#ifndef SHAPE_H
#define SHAPE_H

# define PI 3.14

//Abstract Class
class Shape
{
    //virtual functions
    public:
    virtual float calculate_area() = 0;
    virtual float calculate_volume() = 0;
    virtual void display() = 0;
};

class Sphere : public Shape
{
    private:
    float radius;
    
    //Over riding functions
    float calculate_area();
    float calculate_volume();
    void display();
    
    public:
    //Parameterized Constructor
    Sphere(float r)
    {
        this->radius = r;
    }
};

class Cone : public Shape
{
    private:
    float radius;
    float height;
    
    //Over riding functions
    float calculate_area();
    float calculate_volume();
    void display();
    
    public:
    //Parameterized Constructor
    Cone(float r, float h)
    {
        this->radius = r;
        this->height = h;
    }
};

class Box : public Shape
{
    private:
    float length;
    float width;
    float height;
    
    //Over riding functions
    float calculate_area();
    float calculate_volume();
    void display();
    
    public:
    //Parameterized Constructor
    Box(float l, float w, float h)
    {
        this->length = l;
        this->width = w;
        this->height = h;
    }
};
#endif //SHAPE_H

