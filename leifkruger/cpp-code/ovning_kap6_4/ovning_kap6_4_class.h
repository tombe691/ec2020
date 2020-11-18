//
// Created by leif on 2020-11-12.
//

#ifndef OVNING_KAP6_4_OVNING_KAP6_4_CLASS_H
#define OVNING_KAP6_4_OVNING_KAP6_4_CLASS_H

#include <iostream>

using namespace std;

class employee {
private:
    int id; //Employee ID
    float compensation; //Employee salary etc
public:
    void setId(int id);
    void setCompensation(float compensation);
    int getId();
    float getCompensation();
};

#endif //OVNING_KAP6_4_OVNING_KAP6_4_CLASS_H