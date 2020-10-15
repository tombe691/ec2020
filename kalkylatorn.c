//################################//
//Avsikt: Att kolla sin ålder.    //
//Författtare: Abdullahi Aden.    //
//Datum: 2020.10.15.              //
//################################//

#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two digits: ");
    scanf("%lf %lf",&num1, &num2);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf =%.1lf ",num1, num2, num1+num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",num1, num2, num1-num2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",num1, num2, num1*num2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",num1, num2, num1/num2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
