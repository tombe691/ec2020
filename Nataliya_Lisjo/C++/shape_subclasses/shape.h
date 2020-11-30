//  file shape.h
// Created by Nataliya Lisjö //.Nat
// 11/18/2020.
//

#ifndef MAIN_CPP_SHAPE_H
#define MAIN_CPP_SHAPE_H


#include <iostream>
#define PI 3.14159

using namespace std;

class Shape   //bas class
{
private: string Colour;
public:
    char Area(){
        cout << "The Area " ;
    };
    char Volume(){
        cout << "The Volume " ;
    };
    char setColour(){
        cout<<"\n Enter Colour : "; cin>> Colour;
    }
    char  getColour(){
        cout<< Colour;
    };
};
class  Sphere : public Shape
{
    unsigned int radius;
public:
    Sphere() : radius(0) // constructor without argument
    {  }

    void getArea(int radius)    {
        cout << Area()<<" of the Sphere is: " << 4 * PI * radius * radius << endl;
    }
    void getVolume(int radius)  {
        cout << Volume()<<" of the Sphere is: " <<  (4 * PI * radius * radius * radius) / 3 << endl;
    }
};
class  Box : public Shape
{
    unsigned int length, wight, hight;
public:
    Box ( ) : length(0), wight(0), hight(0)
    {  }

    void getArea(int  length, int wight) {
        cout << Area()<<" of the Box is: " << (length * wight ) << endl;
    }
    void getVolume( int length, int wight, int hight ) {
        cout << Volume()<<" of the Box  is : " <<  (length * wight * hight) << endl;
    }
};
class  Cone :  public Shape
{
    unsigned int radius, hight;
public:
    Cone() :  radius(0), hight(0)
    {  }
    void getArea(int radius)    {
        cout <<Area()<<  " of the Cone is: " << PI * radius * radius << endl;
    }
    void getVolume(int radius, int hight)    {
        cout << Volume() << " of the Cone is: " <<  ( PI * radius * radius * hight) / 3 << endl;
    }
};



#endif //MAIN_CPP_SHAPE_H
