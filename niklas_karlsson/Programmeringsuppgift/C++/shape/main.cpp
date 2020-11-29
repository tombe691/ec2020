// File: main.cpp
// Summary: Simple geometric calculator with Shape as base class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include <iostream>
using namespace std;
#include "sphere.hpp"
#include "box.hpp"
#include "cone.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"


int main(void)
{
    Box box;
    Cone cone;
    Rectangle rectangle;
    Sphere sphere;
    Triangle triangle;
    char ch;

    cout << "Calculate volume and area, but first pick what to calculate: "
         << endl
         << "Enter any of the characters in this list to do it's equations. "
         << endl
         << "(B/b) To caclulate Box. " << endl
         << "(C/c) To calculate Cone. " << endl
         << "(R/r) To calculate Rectangle. " << endl
         << "(S/s) To calculate Sphere. " << endl
         << "(T/t) To calculate Triangle. " << endl;

    cin >> ch;

    switch (ch)
    {
        case 'b':
        case 'B':
            cout << "You've picked the Box! " << endl;
            box.Input();
            box.PrintVolume();
            box.PrintArea();
            break;
        case 'C':
        case 'c':
            cout << "You've picked the Cone! " << endl;
            cone.Input();
            cone.PrintVolume();
            cone.PrintArea();
            break;
        case 'R':
        case 'r':
            cout << "You've picked the Rectangle! " << endl;
            rectangle.Input();
            rectangle.PrintVolume();
            rectangle.PrintArea();
            break;
        case 'S':
        case 's':
            cout << "You've picked the Sphere! " << endl;
            sphere.Input();
            sphere.PrintVolume();
            sphere.PrintArea();
            break;
        case 'T':
        case 't':
            cout << "You've picked the Triangle! " << endl;
            triangle.Input();
            triangle.PrintVolume();
            triangle.PrintArea();
            break;
        default:
            cout << "Invalid option. Try again." << endl;
            main();
            // dont call more.
            break;
    }

    cout << endl << "Thank you and farewell! " << endl << endl;

    return 0;
}
