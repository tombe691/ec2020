//
// Created by Nataliya Lisjö //.Nat
// 11/18/2020.
//
 #include "shape.h"
#include <iostream>

int main (){

    Sphere s1;
    unsigned int r;
    s1.setColour();

    cout << "\n Enter a Radius of the sphere: " << endl;
    while (!(cin >> r)) {
        cout << "This isn't DIGITAL, try again: " << endl; //  error message
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    s1.getArea(r);
    s1.getVolume(r);
    cout<<  "The Sphere is " << s1.getColour() << " colour"<< endl;
    //--------------------
    Box b1;
    unsigned int leng, wgh, hgh;
    b1.setColour();
    cout << "\n Enter a length of the Box : "<< endl ; cin >> leng  ;
    cout << " Enter a wight  of the Box : " << endl; cin >>  wgh  ;
    cout << " Enter a height of the Box : " << endl; cin >>  hgh  ;

    b1.getArea(leng,wgh);
    b1.getVolume(leng,wgh,hgh);
    cout<<  "The Box is " << b1.getColour() << " colour"<< endl;
    //-------------------

    Cone c1;
    unsigned int rad, hg;
    c1.setColour();
    cout << "\n  Enter a Radius of the Cone : " << endl; cin >>  rad ;
    cout << " Enter a height of the Cone : " << endl; cin >>  hg  ;
    c1.getArea(rad);
    c1.getVolume(rad,hg);
    cout<<  "The Cone is " << c1.getColour() << " colour"<< endl;
};