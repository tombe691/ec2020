//Johan Andersson J-Azon @ github. 2020-10-13 "Prog9-2.c + Prog9-2func.c"
#include <stdio.h>
#include <string.h>

void baklanges(char *to,const char *from);  // Använder ej denna då programmet gör allt,
                                            // Den printar nya och gamla strängen.
void remove_white(char *to, const char *from); // tar bort alla mellanslag

void tolower_str(char *to,const char *from); // gör strängen till småbokstäver

void ispalindrome(char string[]);           // kontrollerar om strängen är ett palingdrom

int main(){
    while(1){
        printf("type a word in small letters to test palindrome!\n");
        char string1[100], string2[100];
        fgets(string1, 100, stdin);     // tar input från tangentbord
        remove_white(string2, string1); // tar bort "Vita tecken"
        tolower_str(string2, string2); // gör allt till småbokstäver
        ispalindrome(string2); //kontrollerar om den e palindrom
    }
}