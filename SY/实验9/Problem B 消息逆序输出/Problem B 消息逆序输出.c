#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, len;
    char ch[81];
    char *chj;

    gets(ch);
    len = strlen(ch);
    chj = &ch[len - 1];
    for(i = 0; i < len; i++, chj--)
    {
        printf("%c", *chj);
    }

    return 0;
}
