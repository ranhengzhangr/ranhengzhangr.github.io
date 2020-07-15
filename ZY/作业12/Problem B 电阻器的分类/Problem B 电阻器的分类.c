#include <stdio.h>

int main (void)
{
    int sum[4], sort[4], i, n, t, i0, i1, temp;
    char ch[25];

    while(scanf("%d", &n) != EOF&&n > 0)
    {
        sum[0] = 0, sum[1] = 0, sum[2] = 0, sum[3] = 0;
        sort[0] = 0, sort[1] = 1, sort[2] = 2, sort[3] = 3;
        for(i = 0; i < n; i++)
        {
            getchar();
            scanf("%s", &ch);
            scanf("%d", &t);
            switch(ch[3])
            {
                case 'm': sum[0] += t; break;
                case 'i': sum[1] += t; break;
                case 's': sum[2] += t; break;
                case 'e': sum[3] += t; break;
            }
            for(i0 = 0; i0 < 4; i0++)
            {
                for(i1 = i0 + 1; i1 < 4; i1++)
                {
                    if(sum[sort[i0]] > sum[sort[i1]])
                    {
                        temp = sort[i0], sort[i0] = sort[i1], sort[i1] = temp;
                    }
                }
            }
        }
        for(i = 0; i < 4; i++)
        {
            switch(sort[i])
            {
                case 0: printf("FILM %d\n", sum[sort[i]]); break;
                case 1: printf("SOLI %d\n", sum[sort[i]]); break;
                case 2: printf("SENS %d\n", sum[sort[i]]); break;
                case 3: printf("WIRE %d\n", sum[sort[i]]); break;
            }
        }
    }

    return 0;
}
