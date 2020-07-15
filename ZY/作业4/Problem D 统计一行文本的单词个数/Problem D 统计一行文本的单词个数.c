#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, t1, t2, len, sum = 1;
    char ch[200];

    gets(ch);
    len = strlen(ch);
    for(i = 0; i < len; i++)
    {
        t1 = ch[i], t2 = ch[i + 1];
        if(t1 == 32&&t2 != 32)
        {
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}
