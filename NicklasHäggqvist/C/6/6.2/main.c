#include <stdio.h>

float calcvat(float, float);

int main(void){
	float rate;
	float price;
	printf("Enter price: ");
	scanf("%f", &price);
	printf("Enter vat rate (percentage): ");
	scanf("%f", &rate);
	printf("Price VAT incl.: %.2f\n", calcvat(price, rate));
	return 0;
}

float calcvat(float price, float rate){
	return price + price * rate / 100;
}
