#include "area.h"

float rectangle(float b, float h){
	return b * h;
}

float triangle(float b, float h){
	return (b * h) / 2;
}

float circle(float r){
	return PI * (r * r);
}
