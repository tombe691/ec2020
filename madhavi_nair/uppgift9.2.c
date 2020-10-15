//==============================================================================
//Description   : To check if the string is a palindrome.
//Filename      : uppgift_9.2
//Date          : 2020-10-13
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================


#include <stdio.h>
#include<string.h>


int main()
{
    //string array to hold original and reversed string
    char original_str[100],reverse_str[100],temp_store;
    int start,end;
    //Taking string from the user
    printf("Enter the string\n");
    scanf("%s",reverse_str);
    //Making a copy of the user string
    strcpy(original_str,reverse_str);
    start=0;
    //Holds the length of the string
    end=strlen(reverse_str)-1;

    // Reversing the string
        while(start<end)
        {
            temp_store= reverse_str[start];
            reverse_str[start]= reverse_str[end];
            reverse_str[end]=temp_store;
            start++;
            end--
        }
        //comparing two strings
        if(strcmp(original_str,reverse_str)== 0)
        {
            printf("%s is a palindrome", original_str);
        }
        else
        {
            printf("%s is not a palindrome",original_str);
        }
    return 0;
}
