// File: main.cpp
// Summary: Simple geometric calculator with Shape as base class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <string>
#include <utility>
#include <tuple>
#include "shape.hpp"
#include "sphere.hpp"
#include "box.hpp"
#include "cone.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"

using namespace std;

list<pair<string, pair<double, double>>> oShape;
list<pair<string, pair<double, double>>>::iterator it;

int main(void)
{
    Shape *shape;
    Box box;
    Cone cone;
    Rectangle rectangle;
    Sphere sphere;
    Triangle triangle;

    bool stay_a_while_and_listen = 1;

    // Store these in silence...
    Shape *box1 = new Box;
    Shape *cone1 = new Cone;
    Shape *rectangle1 = new Rectangle;
    Shape *sphere1 = new Sphere;
    Shape *triangle1 = new Triangle;

    list<Shape*> myShape;
    myShape.push_back(box1);
    myShape.push_back(cone1);
    myShape.push_back(rectangle1);
    myShape.push_back(sphere1);
    myShape.push_back(triangle1);

    do
    {
        char ch;
        cout << "Calculate volume and area, but first pick what to calculate: "
             << endl
             << "Enter any of the characters in this list to do it's equations. "
             << endl
             << "(B/b) To caclulate Box. " << endl
             << "(C/c) To calculate Cone. " << endl
             << "(R/r) To calculate Rectangle. " << endl
             << "(S/s) To calculate Sphere. " << endl
             << "(T/t) To calculate Triangle. " << endl << endl
             << ">> NEW << Linked list available!" << endl
             << "(L/l) To display linked lists. " << endl
             << "(Q/q) To exit the program " << endl;

        cin >> ch;

        switch (ch)
        {
            case 'B':
            case 'b':
                shape = &box;
                cout << "You've picked the Box! " << endl;
                // User input
                shape->Input();
                // Multidimensional list.
                oShape.push_back(make_pair("Box",
                    make_pair(shape->Volume(), shape->Area())));
                // Define the boxshape variable to find pointer later on.
                // Print it all.
                shape->PrintVolume();
                shape->PrintArea();
                break;  // Break the switch
            case 'C':
            case 'c':
                shape = &cone;
                cout << "You've picked the Cone! " << endl;
                // User input
                shape->Input();
                oShape.push_back(make_pair("Cone",
                    make_pair(shape->Volume(), shape->Area())));
                // Print it all.
                shape->PrintVolume();
                shape->PrintArea();
                break;  // Break the switch
            case 'l':
            case 'L':
                listAll();
                break;
            case 'R':
            case 'r':
                shape = &rectangle;
                cout << "You've picked the Rectangle! " << endl;
                // User input
                shape->Input();
                oShape.push_back(make_pair("Rectangle",
                    make_pair(shape->Volume(), shape->Area())));
                // Print it all.
                shape->PrintVolume();
                shape->PrintArea();
                break;  // Break the switch
            case 'S':
            case 's':
                shape = &sphere;
                cout << "You've picked the Sphere! " << endl;
                // User input
                shape->Input();
                oShape.push_back(make_pair("Sphere",
                    make_pair(shape->Volume(), shape->Area())));
                // Print it all.
                shape->PrintVolume();
                shape->PrintArea();
                break;  // Break the switch
            case 'T':
            case 't':
                shape = &triangle;
                cout << "You've picked the Triangle! " << endl;
                // User input
                shape->Input();
                oShape.push_back(make_pair("Triangle",
                    make_pair(shape->Volume(), shape->Area())));
                // Print it all.
                shape->PrintVolume();
                shape->PrintArea();
                break;  // Break the switch
            case 'Q':
            case 'q':
                // Break the while
                stay_a_while_and_listen = 0;
                // and then break the case, not much below but a little faster
                break;
            default:
                // Anything else that we dont know how to handle.
                cout << "Invalid option. Try again." << endl;
                // Clear it.
                cin.clear();
                break;  // Break the switch
        }
    } while (stay_a_while_and_listen);
    return 0;
}


void listAll(void)
{
    double y, z;
    cout << "There's " << (int)oShape.size() <<
            " elements in our list." << endl;
    for (auto it = oShape.begin(); it != oShape.end(); it++)
    {
        // If not the compiler will complain about:
        // has no member named 'first'
        // has no member named 'second'..
        auto is = *it;

        cout << ' ' << is.first << ' ';
        tie(y, z) = is.second;
        cout << "Volume: " << y << ", Area: " << z << endl;
    }
    cout << endl;
}
