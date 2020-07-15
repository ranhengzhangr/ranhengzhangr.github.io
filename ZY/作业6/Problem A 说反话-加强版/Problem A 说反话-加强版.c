#include <stdio.h>

#include <string.h>

int main (void)
{
    int i1, i2, len;
    char ch[1000], ur;

    gets(ch);
    len = strlen(ch);
    for(i1 = len; i1 > 0; i1--)
    {
        if(ch[i1] == ' '&&ch[i1 + 1] != ' '){
            i2 = i1 + 1;
            while(ch[i2] != ' '&&ch[i2] != '\0' )
            {
                putchar(ch[i2]);
                i2++;
            }
            printf(" ");
        }
    }
    while(ch[i1] != ' '&&ch[i1] != '\0' )
    {
        putchar(ch[i1]);
        i1++;
    }

    return 0;
}
