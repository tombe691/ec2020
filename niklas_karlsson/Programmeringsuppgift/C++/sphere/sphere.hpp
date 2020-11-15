#include <cmath>    // for pow() and asin.

class Sphere
{
    private:
        double radius;
        double PI = 2 * asin(1.0);  // asin() returns the value of PI/2..
    public:
        void setRadius(double radius)
        {
            this->radius = radius;
        }
        double getVolume(void);
        double getArea(void);
};
