//==============================================================================
//Description   :To swap numbers using pointers  .
//Foldername    : pointers_swap
//Date          : 2020-19-07
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================
#include<stdio.h>
#include"pointers_swap.h"

int main()
{
    int num1,num2;
    printf("Enter the value for num1= ");
    scanf("%d",&num1);
    printf("\nEnter the value for num1= ");
    scanf("%d",&num2);
    
    printf("\nBefore swapping num1= %d and num2=%d",num1,num2);

    swap_numbers(&num1,&num2);
    printf("\nAfter swapping num1= %d and num2=%d",num1,num2);

    return 0;
}

