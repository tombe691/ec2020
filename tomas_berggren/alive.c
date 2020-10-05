#include <stdio.h>
int a = 0;

void f(){
    int b = 0;
    static int c = 0;
    printf("a=%d b= %d c= %d\n", ++a, ++b, ++c);
}
int main() {
    f();
    a++;
    f();
    return 0;
}

//a=1 b= 1 c= 1
//a=3 b= 1 c= 2