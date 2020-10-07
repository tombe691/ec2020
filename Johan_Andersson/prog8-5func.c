//Johan Andersson, 2020-10-07 J-Azon @github

#include "prog8-5.h"

void sum(double field[],int amount){
    double sum = 0;
    for(int i = 0; i<amount; i++){ //loop som går genom vektorns värden och summerar alla dessa och skriver ut dom.
        sum += field[i];
    }
    return printf("%f", sum);
}
void kvad_sum(double field[],int amount){
    double sum = 0;
    for(int i = 0; i < amount; i++){ //loop som går genom vektorns värden och multiplicerar dom med sig själv
        sum += field[i] * field[i]; // och skriver ut dom som en klump summa.
    }
    return printf("%f", sum);
}