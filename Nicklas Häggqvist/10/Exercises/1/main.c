#include <stdio.h>
#include "fileio.h"

int main(void){
	while(1){
		char name[MAX_CHARS];
		getname(name);
		writename(name);
	}
	return 0;
}
