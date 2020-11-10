#include <stdio.h>
#define FILE_NAME "text.txt"

int main(void){
	FILE *file = fopen(FILE_NAME, "r");
	int c;
	while((c = fgetc(file)) != EOF){
		if(c == '\t'){
			printf("   ");
			continue;
		}
		putchar(c);
	}
	return 0;
}
