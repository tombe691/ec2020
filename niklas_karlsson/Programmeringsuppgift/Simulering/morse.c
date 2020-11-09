#include "morse.h"

// 1000 = 1 sec, 10 = 0.01 second, 100 = 0.1 second.
int longMs = 1000, shortMs = 100, middleMs = 400, refreshMs = 100;

morse_table_t table[] = {
                          {"A",   ".-"},        // 0
                          {"B",   "-..."},      // 1
                          {"C",   "-.-."},      // 2
                          {"D",   "-.."},       // 3
                          {"E",   "."},         // 4
                          {"F",   "..-."},      // 5
                          {"G",   "--."},       // 6
                          {"H",   "...."},      // 7
                          {"I",   ".."},        // 8
                          {"J",   ".---"},      // 9
                          {"K",   "-.-"},       // 10
                          {"L",   ".-.."},      // 11
                          {"M",   "--"},        // 12
                          {"N",   "-."},        // 13
                          {"O",   "---"},       // 14
                          {"P",   ".--."},      // 15
                          {"Q",   "--.-"},      // 16
                          {"R",   ".-."},       // 17
                          {"S",   "..."},       // 18
                          {"T",   "-"},         // 19
                          {"U",   "..-"},       // 20
                          {"V",   "...-"},      // 21
                          {"W",   ".--"},       // 22
                          {"X",   "-..-"},      // 23
                          {"Y",   "-.--"},      // 24
                          {"Z",   "--.."},      // 25
                          {" ",   "/"}          // 26
                        };


char textToMorse(char *text)
{
    // Buffer
    char buf[512];
    int ch;

    // Copy text into the array.
    strcpy(buf, text);

    int length = strlen(buf);

    // I know that there's easier ways to do this.
    // But this is the way I want to do it.
    for (int i = 0; i <= length; i++)
    {
        // Just cover [A-Z].
        switch (toupper(buf[i]))
        {
            case 'A':
                morseus(table[0].morse);
                break;
            case 'B':
                morseus(table[1].morse);
                break;
            case 'C':
                morseus(table[2].morse);
                break;
            case 'D':
                morseus(table[3].morse);
                break;
            case 'E':
                morseus(table[4].morse);
                break;
            case 'F':
                morseus(table[5].morse);
                break;
            case 'G':
                morseus(table[6].morse);
                break;
            case 'H':
                morseus(table[7].morse);
                break;
            case 'I':
                morseus(table[8].morse);
                break;
            case 'J':
                morseus(table[9].morse);
                break;
            case 'K':
                morseus(table[10].morse);
                break;
            case 'L':
                morseus(table[11].morse);
                break;
            case 'M':
                morseus(table[12].morse);
                break;
            case 'N':
                morseus(table[13].morse);
                break;
            case 'O':
                morseus(table[14].morse);
                break;
            case 'P':
                morseus(table[15].morse);
                break;
            case 'Q':
                morseus(table[16].morse);
                break;
            case 'R':
                morseus(table[17].morse);
                break;
            case 'S':
                morseus(table[18].morse);
                break;
            case 'T':
                morseus(table[19].morse);
                break;
            case 'U':
                morseus(table[20].morse);
                break;
            case 'V':
                morseus(table[21].morse);
                break;
            case 'W':
                morseus(table[22].morse);
                break;
            case 'X':
                morseus(table[23].morse);
                break;
            case 'Y':
                morseus(table[24].morse);
                break;
            case 'Z':
                morseus(table[25].morse);
                break;
            case 0: // Counts as end of string
            case ' ':
                morseus(table[26].morse);
                Sleep(longMs);
                break;
            default:
                /*
                 * Since we dont know what this is really.
                 * Just nullify it!
                 */
                morseus(NULL);
                break;
        }

        printf(" ");   // Space
        // Just feels smother with this one here.
        // Could be my computer, who knows. It's staying ;)
        Sleep(refreshMs);
    }
}


/*
 * Watt is love?
 * Baby don't hertz me
 * Don't hertz me.
 * No morse.
 * -- Dont call this function directly. Pretty please.
 */
static char morseus(char *text)
{
    // Just so it can fit. It's more than enough, I know.
    char buf[512];
    // Copy text into the array.
    strcpy(buf, text);

    // Loop as long as its not the end character of a string.
    for (int i = 0; buf[i] != '\0'; i++)
    {
        // Char in the i-position, use %c for character
        printf("%c", buf[i]);

        // Every X letter, we use a slighly longer response.
        // just to make it some authentic.
        if ((i + 1) % strlen(buf) == 0)
        {
            // Now we sleep. How nice. But for how long?
            Sleep(middleMs);
            // Beep aslong as sleep is active
            Beep(900, middleMs);

            // Just back up to the loop again please.
            continue;
        }
        // "else"
        Sleep(shortMs);
        // Beep aslong as sleep is active
        Beep(900, shortMs);
    }
}


/*
 * This is needed for the functions
 * Wanted to strip down the other functions.
 * If I change the text inside one, the others dont follow
 * Now they're united as one.
 */
char textMessage(void)
{
    // The message we want the user to see.
    printf("Enter broadcast:\n");
}
