#include<stdio.h>
#include"pointers_swap.h"

void swap_numbers(int *ptr1,int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}