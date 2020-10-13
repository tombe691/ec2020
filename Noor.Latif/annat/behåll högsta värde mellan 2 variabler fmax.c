#include <stdio.h>
#include <math.h>
int main () {
  double temp, maxtemp; 
    printf("Måndag? ");
    scanf("%lf", &temp);
    maxtemp = temp;
    printf("Tisdag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Onsdag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Torsdag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Fredag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Lördag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Söndag? ");
    scanf("%lf", &temp);
    maxtemp = fmax(maxtemp, temp);
    printf("Högsta temperatur: %.2f", maxtemp);
}