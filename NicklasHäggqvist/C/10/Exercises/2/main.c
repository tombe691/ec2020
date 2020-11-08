#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	char *name = argv[1];
	FILE *file = fopen(name, "r");
	if(file == NULL){
		printf("Oh no, something happened...\nMake sure you passed in a C file as a command line argument!");
		return 0;
	}
	char s[100];
	int cmts;
	int code = 0;
	while(fgets(s, 100, file) != NULL){
		char *cmt;
		cmt = strstr(s, "//");
		if(cmt != NULL){
			cmts++;
			continue;
		}
		code++;
	}
	float pct = ((float)cmts / code) * 100;
	printf("The C file contains of %.2f%% percent comments.", pct);
	return 0;
}
