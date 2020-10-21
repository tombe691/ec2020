/* _____________________________________________________
 * Name    : Recursive_counting.c
 * Author  : Noor Latif, noor@latif.se
 * Date    : 21/10/2020 9:21:55 AM
 * -------------------- Description --------------------
 *      
 * _____________________________________________________ */
/* Prints numbers from 1 to n */
void printNos(unsigned int n) {
    if (n > 0) {
        printNos(n - 1);
        printf("%d ", n);
    }
}

#include <stdio.h>
int main() {
    printNos(100); 
    return 0;
}
