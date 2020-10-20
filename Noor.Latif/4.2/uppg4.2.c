
#include <stdio.h>
int main(){
    for ( int i = 1; i <= 12; i++)
    {
        printf("%d %4d %5d\n", i, (i * i), (i * i * i) );
    }
}