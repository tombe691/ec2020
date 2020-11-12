//
// - Created by Therese Sahlgren 2020-11-12
// - Main-file for calculate area and volume of a sphere
// - Include the header-file with the class
//
#include <iostream>
#include "sphere.h"

using namespace std;
int main() {
//
    sphere area;
    char c, answer;

//Loop until the user want to exit
    while (1) {
        //Call the function to get the radius
        area.getRadius();
        cout << "\nPress 'A' for calculate area and 'V' for calculate volym: ";
        cin >> c;

        //If the user choose A the function will calculate the area
        if (c == 'a' || c == 'A') {
                area.setArea();
        }
        //If the user choose V the function will calculate the volume
        else if (c == 'v' || c == 'V') {
                area.setVolume();
        }

        //Will the user continue or exit the loop
        cout << "\nCalculate again? ('Y' for yes and 'N' for no): ";
        cin >> answer;

            if (answer == 'y' || answer == 'Y') {
                continue;
            }
            else if (answer == 'n' || answer == 'N') {
                break;
            }
    }
    return 0;
}