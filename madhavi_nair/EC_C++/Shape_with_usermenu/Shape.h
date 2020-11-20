//=====================================================================
//Filename      : Shape.h
//Description   : Contains declarations of a classes used
//                shape program.
//Version       : 1.0
//Date          : 2020-11-11
//Author        : Madhavi Nair,madhavianair@gmail.com
//=====================================================================



#ifndef SHAPE_H
#define SHAPE_H

# define PI 3.14

//Declaration of abstract base class
class Shape
{
    public:
    //Functions are overidden in the child classes
    virtual float calculate_area() = 0;
    virtual float calculate_volume() = 0;
    virtual void display() = 0;
   
};

// Declaration of first child class
class Sphere : public Shape
{
    private:
    float radius;
    void set_radius(float r);
    float calculate_area();
    float calculate_volume();
    void display(void);
    
    public:
    Sphere()
    {
        radius = 0;
    }

    bool get_radius(float r);
};

// Declaration of second child class
class Box : public Shape
{
    private:
    float height;
    float width;
    float length;
    
    void set_box_data(float h,float w,float l);
    float calculate_area();
    float calculate_volume();
    void display(void); 

    public:
    Box()
    {
        height = 0;
        width = 0;
        length = 0;
    }

    bool get_box_data(float height,float width,float length);
       
};

// Declaration of third child class
class Cone : public Shape
{
    private:
    float height;
    float radius;

    void set_cone_data(float h,float r);
    float calculate_area();
    float calculate_volume();
    void display(void);
    
    public:
    Cone()
    {
      height = 0;
      radius = 0;    
    }

    bool get_cone_data(float height,float radius);
};

#endif //SHAPE_H

