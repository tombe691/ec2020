#include <stdio.h>
#include <stdlib.h>

int sqr(int);
int cub(int);

int main(void){
	int i = 1;
	while(i <= 12){
		int sqrint = sqr(i);
		int cubint = cub(i);
		printf("NUMBER: %d\nSqr: %d\nCub: %d\n===========\n", i, sqrint, cubint);
		i++;
	}
	return 0;
}

int sqr(int x){
	return x * x;
}

int cub(int x){
	return x * x * x;
}
