#ifndef VEC_VEC_H
#define VEC_VEC_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class vec
{
    public:
        vec();
        ~vec();
        void counter(void);
        void list(void);
        void yesNo(void);
    protected:
        vector<int> vect;
        int is;
};

#endif  // VEC_VEC_H
