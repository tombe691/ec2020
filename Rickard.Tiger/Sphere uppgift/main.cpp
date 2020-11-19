/*
______________________________________________________________________________________
Date        : 2020-11-11
File        : main.cpp
Description : Do a sphere and calculate volume and area.
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/

#include <iostream>
#include "sphere.h"


int main()
{

        // Making class variable.
	Sphere newSphere;

        // Variables that retrieve values from the class.
        double radius = 0;
        // Making while loop that runs if radius is more or = 0 or less than 0.
	while (radius >= 0 || radius < 0)
        {
            cout << "Enter a Radius to count the volume and area of a sphere!" << endl;
        //Error when entering letter.    
	while (!(cin >> radius))
            {
                // Explain error.
	            cout << "Wrong a number must be entered: " << endl;
                // Clear input stream.
	            cin.clear();
                // Discard previous input.
	            cin.ignore(1000, '\n');
            }
	
    // Puts radius after cin in set radius.
	newSphere.setRadius(radius);
            // If radius <0 message.
            if (radius < 0)
            {
                cout << "Wrong, you can not count radius negative." << endl;
            }
            // If not write the methods.
            else
            {
                newSphere.getVolume();
                newSphere.getArea();
                break;
            }
        }
}