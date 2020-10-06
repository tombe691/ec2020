#include <stdio.h>
#include <stdlib.h>
#define MAX_ROWS 10

int main()
{

    for (int row=1;row<=MAX_ROWS;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("%d\t",row*col);


        }

        printf("\n");
    }


    return 0;
}
