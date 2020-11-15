#include <cmath>    // for pow() and asin.

class Sphere
{
    // Only callable from this class or friend
    private:
        double radius;
        double PI = 2 * asin(1.0);  // asin() returns the value of PI/2..
    // Can be seen/callable everywhere.
    public:
        void setRadius(double radius)
        {
            this->radius = radius;
        }
        // Declarations
        double getVolume(void);
        double getArea(void);
};
