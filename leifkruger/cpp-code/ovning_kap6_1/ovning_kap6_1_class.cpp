#include <iostream>
#include "ovning_kap6_1_class.h"

void Int::zerointVariable() {
    intVariable = 0;
}

void Int::setintVariable(int inputInt) {
    intVariable = inputInt;
}

void Int::sumintVariable(Int A, Int B) {
    intVariable = A.intVariable + B.intVariable;
}

int Int::getintVariable() {
    return intVariable;
}