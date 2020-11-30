//  file shape.h
// Created by Nataliya Lisjö //.Nat
// 11/28/2020.
//

#ifndef MAIN_CPP_SHAPE_H
#define MAIN_CPP_SHAPE_H

#include <iostream>
#define PI 3.14159
using namespace std;

class Shape   //bas class
{
private:

    virtual int area(){
        cout << "Shape::area()" << endl;
        return 1;    }
    virtual int volume(){
        cout << "Shape::volume()" << endl;
        return 1;    }
public:
    void bar(){
       double c = area();
       double  b = volume();
       cout << c;
       cout<< b;
    }
};
class  Sphere : public Shape {
    double radius;
    public:
   Sphere() : radius(0) // constructor without argument
   {

   }

    virtual  double  area(double  radius)    {
        cout<<" The Area of the Sphere is: " <<  endl;
        return 4 * PI * radius * radius ;
    }
    virtual double volume(double  radius)  {
        cout << "The Volume of the Sphere is: " <<    endl;
        return (4 * PI * radius * radius * radius) / 3;
    }
};
class  Box : public Shape
{
    double length, wight, height;
public:
    Box ( ) : length(0), wight(0), height(0)
    {

    }

    virtual  double  area(double   length, double  wight) {
        cout <<"The Area of the Box is: " <<   endl;
        return (length * wight );    }
    virtual  double volume( double  length, double  wight, double  height ) {
        cout <<  "The Volume of the Box  is : " <<    endl;
        return  (length * wight * height);    }
};
class  Cone :  public Shape
{
    double  radius, height;
public:
    Cone() :  radius(0), height(0)
    {  }
    virtual  double area(double  radius)    {
        cout <<" The Area of the Cone is: " <<  endl;
        return PI * radius * radius ;    }
    virtual  double volume(double  radius, double  height)    {
        cout <<  "The Volume of the Cone is: " <<   endl;
        return ( PI * radius * radius * height) / 3 ;    }
};

#endif //MAIN_CPP_SHAPE_H
