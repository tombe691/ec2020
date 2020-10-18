#enter the name of the file containing "int main()" function.
MAIN = main
CC = gcc
CFLAGS = -Wall -Wextra -Wshadow -Wredundant-decls -Wformat
CFILES = $(MAIN).c mystring.c
main: $(CFILES)
	$(CC) $(CFLAGS) -o main.exe $(CFILES) && .\$(MAIN).exe
