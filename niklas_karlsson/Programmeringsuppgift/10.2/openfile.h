/*
 * @Name openfile.h
 * @Author: Niklas Karlsson | schlook @ github.com | email: knasen1@gmail.com
 * @Description: Header file for openfile functions
 * @Date: 2020-10-18
 * @Compile Windows: mingw32-make -f makefile.win
 * @Compile Unix: make
 */

// Since it's a tiny project just include everthing everywhere.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Make it available for the whole project
#define BUF 250
// definitions for the functions
FILE *openFile(const char *filename, const char *flags);
char *replaceTabs(const char *filename, int num);
