//=====================================================================
//Filename      : main.cpp
//Description   : Program to calculate surface area/volume/ of sphere 
//                box and cone by inheritance.
//Version       : 1.0
//Date          : 2020-11-11
//Author        : Madhavi Nair,madhavianair@gmail.com
//=====================================================================

#include <iostream>
#include <cmath>
#include "Shape.h"

int main() {
    
    Shape *shape_ptr;
    
    //Passing the parameters for constructor
    Sphere sphere_obj(5);
    //Assigning address of object to pointer of base class
    shape_ptr = &sphere_obj;
    shape_ptr->display();
    
    //Passing the parameters for constructor
    Cone cone_obj(4,3);
    //Assigning address of object to pointer of base class
    shape_ptr = &cone_obj;
    shape_ptr->display();

    //Passing the parameters for constructor
    Box box_obj(4,3,1);
    //Assigning address of object to pointer of base class
    shape_ptr = &box_obj;
    shape_ptr->display();

    return 0;
}


    
    
    
