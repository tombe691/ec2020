#include <stdio.h>

/* Takes a digit from the user and returns it as a double value. */
double getDouble() {
    double x;
    scanf("%lf", &x);
    return x;
}

/* Calculates the area of a rectangle and returns the value. */
double areaRectangle(double height, double length) {
    return height * length;
}

/* Calculates the area of a circle and returns the value. */
double areaCircle(double radius) {
    return PI * radius * radius;
}

/* Calculates the area of a triangle and returns the value. */
double areaTriangle(double height, double base) {
    return height * base / 2;
}
void kudos(char *namn) {
    printf("\nTack till följande kamrater för hjälp: %s", namn);
}
