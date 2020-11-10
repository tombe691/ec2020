#include <stdio.h>
#include "area.h"

int main(void){
	float base, height, radius;
	printf("Enter base: ");
	scanf("%f", &base);
	printf("Enter height: ");
	scanf("%f", &height);
	printf("Enter radius: ");
	scanf("%f", &radius);
	printf("..::* AREA *::..\nRect: %.2f\nTri: %.2f\nCirc: %.2f", rectangle(base, height), triangle(base, height), circle(radius));
	return 0;
}
