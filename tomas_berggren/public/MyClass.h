//
// Created by Tomas Berggren on 2020-11-09.
//

#ifndef PUBLIC_MYCLASS_H
#define PUBLIC_MYCLASS_H
#include <iostream>
using namespace std;


class MyClass {
//public:    // Public access specifier
    int x;   // Public attribute
//private:   // Private access specifier
    int y;   // Private attribute

public:
    void setx(int myX);
    void sety(int myY);
    void printXY();
//private:
    int getx();

    int gety();

};



#endif //PUBLIC_MYCLASS_H
