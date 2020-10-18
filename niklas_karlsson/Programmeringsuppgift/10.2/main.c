/*
 * @Name main.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Replace tabs with spaces.
 * @Date: 2020-10-18
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

#include "openfile.h"

int main(void)
{
    static char filename[BUF + 1];
    // Print to screen
    printf("Enter file to open: ");
    // Load string to filename
    scanf("%s", &filename);
    // Now we remove tabs, enter how many spaces a tab should be replaced with
    replaceTabs(filename, 5);
    return 0;
}
