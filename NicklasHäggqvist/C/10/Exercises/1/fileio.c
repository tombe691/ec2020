#include <stdio.h>
#include <stdlib.h>
#include "fileio.h"

void getname(char *name){
	printf("Enter name: ");
	if(fgets(name, MAX_CHARS, stdin) == NULL)
		exit(0);
}

void writename(const char *name){
 	FILE *file = fopen(FILE_NAME, "a+");
	if(file == NULL)
		exit(1);
	int index = 1;
	char s[MAX_CHARS];
	while(fgets(s, MAX_CHARS, file) != NULL)
		index++;
	char output[MAX_CHARS + 5];
	sprintf(output, "%d: %s", index, name);
	fputs(output, file);
	fclose(file);
}
