#include <stdio.h>

double sum(double[], int);
double kvad_sum(double[], int);

int main(void){
	double arr[] = { 1.4, 2.7, 3.5, 6.5, 3.4, 6.4 };
	printf("Sum: %.2f\nSum^2: %.2f\n", sum(arr, 6), kvad_sum(arr, 6));
	return 0;
}

double sum(double arr[], int size){
	double sum = 0;
	for(int i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	return sum;
}

double kvad_sum(double arr[], int size){
	double sum = 0;
	for(int i = 0; i < size; i++){
		double val = arr[i];
		sum = sum + (val * val);
	}
	return sum;
}
