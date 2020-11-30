/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : main.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
// Declaring include and Header files dont need shape cause shape is in box, sphere and cone.h
#include <iostream>
#include "Box.h"
#include "Sphere.h"
#include "Cone.h"
#include <list>
#include "Shape.h"
int main() {
    Box* Box1 = new Box("Red", 5, 10, 15);
    Cone* Cone1 = new Cone("Yellow",5, 10);
    Sphere* Sphere1 = new Sphere("Blue", 5);

    std::list<Box*>myList;
    std::list<Cone*>myListCone;
    std::list<Sphere*>myListSphere;

    myList.push_back(Box1);
    myListCone.push_back(Cone1);
    myListSphere.push_back(Sphere1);

    std::cout << "BOX!" << std::endl;
    std::cout << "-------------" << std::endl;
    for (auto* unit : myList)
    {
        unit ->getVolume();
        unit ->getArea();
        unit ->getColor();
    }
    std::cout <<""<< std::endl;
    std::cout << "CONE!" << std::endl;
    std::cout << "-------------" << std::endl;
    for (auto* unit : myListCone)
    {
        unit ->getVolume();
        unit ->getTotalArea();
        unit ->getColor();
    }
    std::cout <<""<< std::endl;
    std::cout << "SPHERE!" << std::endl;
    std::cout << "-------------" << std::endl;
    for (auto* unit : myListSphere)
    {
        unit ->getVolume();
        unit ->getArea();
        unit ->getColor();
    }

    return 0;
}
