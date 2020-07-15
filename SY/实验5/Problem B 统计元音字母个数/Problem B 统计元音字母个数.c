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
            case 'O':
            case 'U': se += 1; break;
        }

    }
    printf ("%d\n", se);

    return 0;
}
