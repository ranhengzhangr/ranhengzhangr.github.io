#include <stdio.h>

int main (void)
{
    int i1, i2, n, m, x, y, sum;

    scanf("%d", &n);
    int f[n][n];

    for(i1 = 0; i1 < n; i1++)
    {
        for(i2 = 0; i2 < n; i2++)
        {
            scanf("%d", &f[i1][i2]);
        }
    }
    scanf("%d", &m);
    int g[m][m];

    for(i1 = 0; i1 < m; i1++)
    {
        for(i2 = 0; i2 < m; i2++)
        {
            scanf("%d", &g[i1][i2]);
        }
    }
    for(i1 = 0; i1 <= n - m; i1++)
    {
        for(i2 = 0; i2 <= n - m; i2++)
        {
            sum = 0;
            for(x = 0; x < m; x++)
            {
                for(y = 0; y < m; y++)
                {
                    sum += f[i1 + x][i2 + y] * g[x][y];
                }
            }
            if(i2 > 0){
                printf(" ");
            }
            printf("%d", sum);
        }
        printf("\n");
    }

    return 0;
}
