//
// Created by Tomas Berggren on 2020-11-09.
//

#include "MyClass.h"


int MyClass::getx() {
    return x;
}

void MyClass::setx(int myX) {
    x = myX;
}

int MyClass::gety() {
    return y;
}

void MyClass::sety(int myY) {

    y = myY;
}

void MyClass::printXY() {
    cout << "x =: " << x << " y =: " << y<< endl;
}
