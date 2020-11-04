#include <stdio.h>

void minmax(int len, double *arr, double *min, double *max);

int main(void){
	double x, y;
	double arr[] = { 2.5, 3.7, 7.3 };
	minmax(3, arr, &x, &y);
	printf("X: %f | Y: %f\n", x, y);
	return 0;
}

void minmax(int len, double *arr, double *min, double *max){
	*min = *arr; 
	*max = *arr; 
	for(int i = 0; i < len; i++){
		if(*min > arr[i])
			*min = arr[i];
		if(*max < arr[i])
			*max = arr[i];
	}
}
