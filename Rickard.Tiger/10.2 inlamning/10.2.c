/*
______________________________________________________________________________________
Date        : 2020-10-17
File        : 10.2.c
Description : Program that takes a txt file and reads it and changes tab to three spaces. 
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include <stdio.h>
#include "functions.h"// includes fopen.
int main()
{
    //Opens a txt file to read.
    FILE *infil = fopen("minfil.txt", "r");
    //Variable that gets a value in while loop.
    int file;
    // Send a value to file. if it not matches EOF.
    while ((file = fgetc(infil)) != EOF)
    {
        //if file gets in any tab you will replace them with 3 spaces.
        if (file == '\t')
        {
	        printf("   ");
        }
        //Else puts character in file
        else
        {
            putchar(file);
        }
    
    }
    //Always close your file.
    fclose(infil);
    return 0;
}