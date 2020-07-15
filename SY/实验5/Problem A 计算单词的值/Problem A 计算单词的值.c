#include <stdio.h>

#include <ctype.h>

int main (void)
{
    char ch;
    int se = 0;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        switch (ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U': se = se + 1; break;
            case 'D':
            case 'G': se = se + 2; break;
            case 'B':
            case 'C':
            case 'M':
            case 'P': se = se + 3; break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y': se = se + 4; break;
            case 'K': se = se + 5; break;
            case 'J':
            case 'X': se = se + 8; break;
            case 'Q':
            case 'Z': se = se + 10; break;
        }

    }
    printf ("%d\n", se);

    return 0;
}
