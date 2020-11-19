#include <stdio.h>



struct cars
{
    int a;
    char *b;
    float c;
};
typedef struct cars car;


void myFunction(car c);

int main(void)
{
    car c;
    myFunction( "Volvo");

}


void myFunction()
{
    car c;

    car.a = 1;
    strcpy(car.b, "volvo");
    car.c = 44.3;
}
