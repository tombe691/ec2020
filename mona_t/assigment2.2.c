#include<stdio.h>
int main()
{
	double c,f;
	printf("Enter Fahrenheit grader: ");
	scanf("%lf",&f);
	c=(f-32)*5/9;
	printf("Celsuis grader is :%lf  \n",c);/* code */
	return 0;
}