//
// Created by William on 2020-11-09.
//

#ifndef TESTPROJECT_ENTITY_H
#define TESTPROJECT_ENTITY_H

#include "Location.h"

class Entity {
private:
    int id;
    Location location;
public:
    Entity(int _id) : id(_id) {}
    void spawnEntity();
};

#endif //TESTPROJECT_ENTITY_H
