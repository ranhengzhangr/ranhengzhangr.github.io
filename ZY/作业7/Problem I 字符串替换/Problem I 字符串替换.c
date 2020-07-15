#include <stdio.h>

char change(char ch);

int main (void)
{
    int i, len;
    char ch, wd[80];

    ch = getchar();
    for(len = 0; ch != '\n'; len++)
    {
        wd[len] = ch;
        ch = getchar();
    }
    for(i = 0; i < len; i++)
    {
        if(wd[i] >= 'A'&&wd[i] <= 'Z'){
            ch = change(wd[i]);
        }
        else{
            ch = wd[i];
        }
        putchar(ch);
    }

    return 0;
}

char change(char ch)
{
    switch(ch)
    {
        case 'A':return 'Z';
        case 'B':return 'Y';
        case 'C':return 'X';
        case 'D':return 'W';
        case 'E':return 'V';
        case 'F':return 'U';
        case 'G':return 'T';
        case 'H':return 'S';
        case 'I':return 'R';
        case 'J':return 'Q';
        case 'K':return 'P';
        case 'L':return 'O';
        case 'M':return 'N';
        case 'N':return 'M';
        case 'O':return 'L';
        case 'P':return 'K';
        case 'Q':return 'J';
        case 'R':return 'I';
        case 'S':return 'H';
        case 'T':return 'G';
        case 'U':return 'F';
        case 'V':return 'E';
        case 'W':return 'D';
        case 'X':return 'C';
        case 'Y':return 'B';
        case 'Z':return 'A';
    }
}
