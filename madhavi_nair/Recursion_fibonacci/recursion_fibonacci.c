#include <stdio.h>
#include "recursion_fibonacci.h"


int fibonacci(int n_term )
{
    // checks if the number entered is 0 0r 1
    if (n_term==0)
    {
        return(0);
    }
    else if(n_term == 1)
    {
        return(1);
    }
    else
    {
        // calls the itself
        return(fibonacci(n_term-1)+fibonacci(n_term-2));
    }   

}

