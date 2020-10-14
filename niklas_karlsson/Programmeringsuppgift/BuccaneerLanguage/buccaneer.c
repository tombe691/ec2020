/*
 * @Name: buccaneer.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Buccaneer language (rövarspråk) made by Astrid Lindgren (Pippi Longstocking).
 * @Creation date: 2020-10-14
 * @Modified date: 2020-10-14
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
 * Const char str[] for read only
 */
void buccaneer(const char str[])
{
    char temp[512];
    int c = 0, is_con;
    /*
     * since most vowels have åäöëêéè and stuff we just dont look for it.
     * Look for consonants instead (somewhat easier)
     */
    char cons[] = "bcdfghjklmnpqrstvwxz";
    // Loop the de loop
    for (int i = 0; strlen(str) > i; i++)
    {
        // Unset with every loop
        is_con = 0;
        // printf("Yes, now next loop\n");
        for (int j = 0; strlen(cons) > j; j++)
        {
            // Compare string with lower case consonants
            if (str[i] == cons[j])
            {
                // printf("Yes it's a consonant\n");
                is_con = 1;
            }

            // Compare string with upper case consonants
            else if (str[i] == toupper(cons[j]))
            {
                // printf("Yes it's a UPPER CASE consonant\n");
                is_con = 1;
            }
        }
        // printf("We been looping all the time.\n");
        // is it a lower case consonant?
        if (is_con)
        {
            // Adds the orignial consonant
            temp[c] = str[i];
            if (isupper(str[i]))
            {
                // add an upper case O
                temp[c+1] = 'O';
            }
            else
            {
                // add an lower case o
                temp[c+1] = 'o';
            }
            // Adds the orignial consonant
            temp[c+2] = str[i];
            // Since we add 3 chars, increase by 3
            c += 3;
        }
        else
        {
            // Could it be a simple vowel? :D or is it a number? Find out soon.
            temp[c] = str[i];
            c++;
        }
    }

    // add end to string. Just to be sure.
    temp[c] = '\0';

    if (!temp)
    {
        // Print the failure
        printf("YOU FAILED!\n");
        // Just go!
        exit(0);
    }

    printf("%s", temp);
}
