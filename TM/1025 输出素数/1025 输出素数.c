#include <stdio.h>

#include <math.h>

int main (void)
{
    int a, b, i, n, k, t, flag;

    while(scanf("%d %d", &a, &b)==2)
    {
        k = 0;
        for(i = a; i <= b; i++)
        {
            t = sqrt(i);
            if(i < 2)    flag = -1;
            else    flag = 1;
            for(n = 2; n <= t; n++)
            {
                if(i % n == 0)    flag = -1;
            }
            if(flag == 1){
                if(k > 0)    printf(" ");
                printf("%d", i);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}
