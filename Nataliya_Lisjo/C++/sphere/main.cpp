//Date        : 2020-12-11
//File        : main.cpp
//Description : Program calculate volume and area  of the sphere .
//Author      : Nataliya Lisjö

#include <iostream>
#include "o.h"
using namespace  std;
 int main() {
     int yes;

     do {
         Sphere Earth;
         double r;

         cout << "\n\tEnter a Radius of the sphere: " << endl;
         while (!(cin >> r)) {
             cout << "This isn't DIGITAL, try again: " << endl; //  error message
             cin.clear();
             cin.ignore(INT_MAX, '\n');
         }
         Earth.setRadius(r);

         if (r < 0)  // catching  enters error(negative radius)
             cout << "TRY AGAIN, you can't have negative radius." << endl;
         else {
             Earth.getVolume();
             Earth.getArea();
         }
         cout << "\n\t Do you want continue  Yes =1/ No ";
         cin >> yes;

     } while (yes == 1);
     if (yes != 1) {
         printf("\n Program  is closed ");
     }
 }

