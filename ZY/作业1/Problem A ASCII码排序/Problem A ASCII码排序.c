#include <stdio.h>

int main (void)
{
    int i, t;
    char ch[3], mote;

    while(scanf("%s", &ch) != EOF)
    {
        for(i = 0; i < 3; i++)
        {
            for(t = i + 1; t < 3; t++)
            {
                if(ch[i] > ch[t]){
                    mote = ch[i], ch[i] = ch[t], ch[t] = mote;
                }
            }
        }
        printf("%c %c %c\n", ch[0], ch[1], ch[2]);
    }

    return 0;
}
