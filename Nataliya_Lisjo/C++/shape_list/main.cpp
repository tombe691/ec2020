// file shape.cpp
// Created by Nataliya Lisjö //.Nat
// 11/28/2020.
//
#include "shape.h"
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main (){
    //create list for all figures from bas class Shape


    Shape* mySphere=new Sphere;
    Shape* myBox= new Box;
    Shape* myCone= new Cone;
    list <Shape*> myListShape;

   for(auto* unit:myListShape){
       unit->bar();
   }


 //----------------------

    double *r,radius;
    r=&radius;
 // create object sphere and + value
    //Sphere mySphere;

    cout << "\n Enter a Radius of the sphere: " << endl;
    while (!(cin >> *r)) {
        cout << "This isn't DIGITAL, try again: " << endl; //  error message
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    mySphere->bar() ; //area(*r);
    //mySphere->bar() ;//.volume(*r);

    //add object from under class Sphere to end of the List
    myListShape.push_back(mySphere);

    //--------------------
    double length, width, height;
    double  *leng, *wdh, *hgh;
    leng=&length;
    wdh=&width;
    hgh=&width;
    // create object box and + value

    //  Box myBox;
    cout << "\n Enter a length of the Box : "<< endl ; cin >> *leng  ;
    cout << " Enter a wight  of the Box : " << endl; cin >>  *wdh  ;
    cout << " Enter a height of the Box : " << endl; cin >>  *hgh  ;

    myBox->bar() ;//.area(*leng,*wdh);
   // myBox->bar(); //.volume(*leng,*wdh,*hgh);

    //add object from under class Box to end of the List
   myListShape.push_back(myBox);

    //-------------------

    double rads, hgth;
    double  *rad, *hg;
    rad=&rads;
    hg=&hgth;
    // create object cone and + value
    //  Cone myCone;

    cout << "\n  Enter a Radius of the Cone : " << endl; cin >>  *rad ;
    cout << " Enter a height of the Cone : " << endl; cin >>  *hg  ;
    myCone->bar(); //.area(*rad);
   // myCone->bar() ; //.volume(*rad,*hg);

    //add object  from under class Cone to end of the List
     myListShape.push_back(myCone);


    delete myBox ;
    delete myCone ;
    delete mySphere;
}