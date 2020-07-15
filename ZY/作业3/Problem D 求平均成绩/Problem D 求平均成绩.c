#include <stdio.h>

int main (void)
{
    int m, n, i1, i2;

    while(scanf("%d %d\n", &n, &m) != EOF )
    {
        int a[n][m], t = 0, u;
        float b[m], sub, pre;

        for(i1 = 0; i1 < n; i1++)
        {
            for(i2 = 0; i2 < m; i2++)
            {
                scanf("%d", &a[i1][i2]);
            }
        }
        for(i1 = 0; i1 < n; i1++)
        {
            pre = 0;
            for(i2 = 0; i2 < m; i2++)
            {
                pre += a[i1][i2];
            }
            pre /= m;
            if(i1 < n - 1){
                printf("%.2f ", pre);
            }
            else{
                printf("%.2f\n", pre);
            }
        }
        for(i2 = 0; i2 < m; i2++)
        {
            sub = 0;
            for(i1 = 0; i1 < n; i1++)
            {
                sub += a[i1][i2];
            }
            sub /= n;
            b[i2] = sub;
            if(i2 < m - 1){
                printf("%.2f ", sub);
            }
            else{
                printf("%.2f\n", sub);
            }
        }
        for(i1 = 0; i1 < n; i1++)
        {
            u = 0;
            for(i2 = 0; i2 < m; i2++)
            {
                if(a[i1][i2] >= b[i2]){
                    u++;
                }
            }
            if(u == m){
                t++;
            }
        }
        printf("%d\n\n", t);
    }

    return 0;
}
