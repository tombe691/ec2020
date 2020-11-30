#pragma once

class Shape
{
public:
	Shape(float width, float height, std::string type);
	virtual float circumference() = 0;
	virtual float area() = 0;
	friend std::ostream& operator<<(std::ostream& stream, const Shape& shape);
protected:
	std::string type;
	float width = 5;
	float height = 5;
	
};

class Rectangle : public Shape {
public:
	Rectangle(float width, float height);
	float circumference();
	float area();
};

class Square : public Shape {
public:
	Square(float width, float height);
	float circumference();
	float area();
};

class Triangle : public Shape {
public:
	Triangle(float width, float height, float hypotenuse);
	float circumference();
	float area();
	friend std::ostream& operator<<(std::ostream& stream, const Triangle& triangle);
private:
	float hypotenuse = 5;
};

class Sphere : public Shape {
public:
	const float PI;
	Sphere(float diameter);
	float circumference();
	float area();
	float volume();
	friend std::ostream& operator<<(std::ostream& stream, const Sphere& sphere);
private: 
	float radius;
};

