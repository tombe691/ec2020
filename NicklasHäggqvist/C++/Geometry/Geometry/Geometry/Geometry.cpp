#include <iostream>
#include "Shape.h"

int main()
{
	Rectangle rect = Rectangle(2, 5);
	Square square = Square(5, 3);
	Triangle triangle = Triangle(5, 10, 7);
	Sphere sphere = Sphere(10);

	std::cout << rect << std::endl
		<< "Circumference: " << rect.circumference() << std::endl
		<< "Area: " << rect.area() << std::endl << std::endl;
	std::cout << square << std::endl
		<< "Circumference: " << square.circumference() << std::endl
		<< "Area: " << square.area() << std::endl << std::endl;
	std::cout << triangle << std::endl
		<< "Circumference: " << triangle.circumference() << std::endl
		<< "Area: " << triangle.area() << std::endl << std::endl;
	std::cout << sphere << std::endl
		<< "Volume: " << sphere.volume() << std::endl
		<< "Area: " << sphere.area() << std::endl;
}