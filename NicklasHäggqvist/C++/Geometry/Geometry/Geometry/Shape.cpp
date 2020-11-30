#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include "Shape.h"

Shape::Shape(float width, float height, std::string type)
{
	this->width = width;
	this->height = height;
	this->type = type;
}

Rectangle::Rectangle(float width, float height) 
	: Shape(width, height, "Rectangle") {}

float Rectangle::circumference() {
	return width * 2 + height * 2;
}

float Rectangle::area() {
	return width * height;
}

Square::Square(float width, float height) 
	: Shape(width, height, "Square") {}

float Square::circumference() {
	return width * 2 + height * 2;
}

float Square::area() {
	return width * height;
}

Triangle::Triangle(float width, float height, float hypotenuse)
	: Shape(width, height, "Triangle") {
	this->hypotenuse = hypotenuse;
}

float Triangle::circumference() {
	return width + height + hypotenuse;
}

float Triangle::area() {
	return width * height / 2;
}

Sphere::Sphere(float diameter) : PI(3.14159265359),
	Shape(diameter, diameter, "Sphere") {
	radius = diameter / 2;
}

float Sphere::circumference() {
	return 0;
}

float Sphere::area() {
	return 4 * PI * pow(radius, 2);
}

float Sphere::volume() {
	return 4 * PI * pow(radius, 3) / 3;
}

std::ostream& operator<<(std::ostream& stream, const Shape& shape) {
	stream << "Type: " << shape.type << std::endl
		<< "Height: " << shape.height << std::endl
		<< "Width: " << shape.width;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const Triangle& triangle) {
	stream << "Type: " << triangle.type << std::endl
		<< "Height: " << triangle.height << std::endl
		<< "Width: " << triangle.width << std::endl
		<< "Hypotenuse: " << triangle.hypotenuse;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const Sphere& sphere) {
	stream << "Type: " << sphere.type << std::endl
		<< "Radius: " << sphere.radius << std::endl
		<< "Diameter: " << sphere.width;
	return stream;
}
