//
// Created by William on 2020-11-09.
//

#ifndef TESTPROJECT_LOCATION_H
#define TESTPROJECT_LOCATION_H

class Location {
private:
    double x, y, z;
public:
    Location(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
    Location() : x(0.0), y(0.0), z(0.0) {}

    void setX(double _x);
    void setY(double _y);
    void setZ(double _z);

    double getX();
    double getY();
    double getZ();
};

#endif //TESTPROJECT_LOCATION_H
