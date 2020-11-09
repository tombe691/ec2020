#include <stdio.h>
#include <string.h>
//funktion for tolower_str
#include <ctype.h>
//funktion to use setLocale.
#include <locale.h>

void tolower_str(char *to, const char *from);
void remove_white(char *to, const char *from);

int main ()
{
    printf("Write a word to see if its a palindrome ");
    char stringText[50];
    char stringCopy[50];
    //Getstring lays text in string(stringText)
    gets(stringText);
    //Copy stringText and puts value in stringCopy 
    strcpy(stringCopy, stringText);
    //Get the string backwards.
    remove_white(stringCopy, stringCopy);
    //Function to convert text to small text.
    tolower_str(stringText, stringText);
    strrev(stringCopy);
    //Function to remove blanksteps
    
    //Compares the two strings
    if (strcmp (stringCopy,stringText)==0)
    {
        printf("%s is a palindrome\n", stringText);
    }
    else
    {
        printf("%s is not a palindrome, the text backwards is: %s", stringText, stringCopy);
    }
    return 0;
}

void remove_white(char *to, const char *from)
{
  int j = 0;
  for (int i =0; from[i] != '\0'; i++)
    if (!isspace(from[i]))
      to[j++] = from[i];
   to[j] = '\0';
}

void tolower_str(char *to, const char *from)
{
  setlocale(LC_ALL, "");
  int i = 0;
  for (; from[i] != '\0'; i++)
    to[i] = tolower(from[i]);
  to[i] = '\0';
}