#include <stdio.h>

void out_true();

void out_false();

int main (void)
{
    int n;

    while(scanf("%d\n", &n) != EOF )
    {
        int a[1024], ch, i1, i2, r, l, u;

        for(i1 = 0; i1 < n; i1++)
        {
            int t = 0, p = 0;

            while((ch = getchar()) != '\n')
            {
                a[t] = ch;
                t++;
            }
            u = t / 2;
            if(t % 2 == 1)
            {
                u++;
            }
            for(i2 = 0; i2 < u; i2++)
            {
                l = i2;
                r = t - i2 - 1;
                if(a[l] != a[r]){
                    p++;
                }
            }
            if(p == 0){
                out_true();
            }
            else{
                out_false();
            }
        }
    }

    return 0;
}

void out_true()
{
    printf("yes\n");
}

void out_false()
{
    printf("no\n");
}
