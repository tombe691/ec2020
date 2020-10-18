/*
 * @Name openfile.c
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Open file, if file doesnt exits create new file and add content.
 * @Date: 2020-10-18
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */
// Our include file, since we need BUF var and othe
#include "openfile.h"

// Open a file based on filename and flags/mode
FILE *openFile(const char *filename, const char *flags)
{
    // File pointer
    FILE *fp = fopen(filename, flags);
    // Check if file pointer could be opened.
    if (fp == NULL)
    {
        // Print that we couldnt find the text file.
        printf("Couldn't open file \"%s\"\nCreating file %s.\n", filename, filename);
        // Try to create the file
        if ((fp = fopen(filename, "w")) == NULL)
        {
            printf("%s - cannot write to file %s\n"
                   "Make sure that you have the rights to write to the folder.\n"
                   "If unsure please contact administrator for computer: %s",
                   getenv("USERPROFILE"), filename, getenv("HOSTNAME"));
                   fclose(fp); // Close the stream.
                   exit(1);
        }
        // Make a string variale with BUF and a extra char for NULL character
        char str[BUF + 1];
        // Loop, to break out = CTRL + Z (and then add it with an enter)
        while (fgets(str, BUF, stdin) != NULL)
        {
            // Put the content to file pointer
            fputs(str, fp);
            // Print to screen
            printf("Enter text: ");
        }
        // Finished with writes. Switching to read
        fseek(fp, 0, SEEK_CUR);
        // Print that we're trying to read it.
        printf("Trying to open the file \"%s\" again.\n", filename);

        // Open the file once again,
        fp = openFile(filename, flags);
    }

    // Return output.
    return fp;
}

// Replace tabs with number of spaces
char replaceTabs(const char *filename, int num)
{
    // File path, just read.
    FILE *fp = openFile(filename, "r");
    // The character
    int c;
    // Replace tab with X spaces. But dont allow more than 20 spaces...
    if (num > 20)
    {
        // Set it to 20.
        num = 20;
    }

    // As long as character is not end of file
    while ((c = fgetc(fp)) != EOF)
    {
        // If the character is a tab
        if (c == '\t')
        {
            // As long as num is greater than i
            for (int i = 0; num > i; i++)
            {
                printf(" ");
            }

            // Go back up the loop
            continue;
        }
        // Else... just put it there. :D
        printf("%c", c);
    }

    fclose(fp); // Close the stream.
}
