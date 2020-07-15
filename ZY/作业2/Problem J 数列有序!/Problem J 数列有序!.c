#include <stdio.h>

int main (void)
{
    int i, m, n, p, q, mote;

    while(scanf("%d %d", &n, &m) != EOF )
    {
        int a[n + 1];

        a[n] = m;
        for (i = 0; i < n - 1; i++)
        {
            scanf("%d ", &a[i]);
        }
        scanf("%d", &a[n - 1]);
        if (n == 0&&m == 0){
            ;
        }
        else{
            for(i = 0; i < n; i++)
            {
                p = n - i;
                q = p - 1;
                while(a[p] < a[q])
                {
                    mote = a[p];
                    a[p] = a[q];
                    a[q] = mote;
                }
            }
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("%d\n", a[n]);
        }
    }

    return 0;
}
