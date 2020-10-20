//==============================================================================
//Description   :fibonacci series using recursion  .
//Foldername    : recursion_fibonacci
//Date          : 2020-20-07
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================
#include <stdio.h>


int main()
{
    int first_term, second_term,n_term;
   // first_term = 0;
    //second_term = 1;
    
    printf("Enter the no. of terms:\t");
    scanf("%d",&n_term);
    printf("Fibonacci series of %d: ",n_term);
    //printf("%d\t%d\t",first_term,second_term);

    for (int i =0;i<n_term;i++)
    {
        // calls the fibonacci recursively
        printf("\n%d",fibonacci(i));  
    }      

}
