//
// - Created by Therese Sahlgren 2020-11-12
// - Functions to get the radius for calculate area and volume of a sphere
// - Include the header-file with the class and declarations of functions
// - Defining the functions of the class sphere
//
#include <iostream>
#include "sphere.h"
using namespace std;
//making a constant double so the user cant change this variable
const double PI = 3.14159265;

//Function for getting the radius
void sphere::getRadius(void) {
    float r;
    cout << "\nEnter radius: ";
    cin >> r;
    radius = r;
//Catch if the user dont enter a number
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "ERROR! Thats not a number- Try again: " << endl;
        cin >> r;
        radius = r;
    }
}

//Function for calculate the area
void sphere::setArea(void) {
    double area;
    area = 4 * PI * radius * radius;
    cout << "\nThe area of radius: " << radius << "\nArea: " << area << endl;
}

//Function for calculate the volym
void sphere::setVolume(void){
    double volume;
    volume = (4 * PI * radius * radius * radius)/3;
    cout << "\nThe volume of radius: " << radius << "\nVolume: " << volume << endl;
}

