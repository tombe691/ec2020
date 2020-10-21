//==============================================================================
//Description   :To read a text file and replacing tab with newline  .
//Foldername    : uppgift_10.2
//Date          : 2020-18-07
//Author        : Madhavi Nair,madhavianair@gmail.com
//==============================================================================

#include  <Stdio.h>

int main()
{
  FILE *fpointer;
  int text_char;

  // opening the file in read mode
  fpointer = fopen("C:\\Users\\madha\\Desktop\\Trial.txt","r");
  
  // Checking if the file exists
  if(fpointer==NULL)
  {
    printf("Error opening file\n");
  }
  else
  {
    // Checking for End of file
    while(!feof(fpointer))
    {
      // receiving and storing the character in text_char
      // fgetc returns an integer value
      text_char = fgetc(fpointer);

      //Checking for '\t' and replacing with '\n'
      if (text_char == '\t')
      {
        printf("\n");  
      }
      else
      {
        // Outputs the text from the file
        printf("%c",text_char);
      }
      
    }
    
  }
  // closing the file
  fclose(fpointer);

}
