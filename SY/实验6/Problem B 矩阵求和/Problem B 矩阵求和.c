#include <stdio.h>

int main (void)
{
    int i, i1, i2, n, r, t;

    while(scanf("%d", &n) != EOF)
    {
        int m[n][n];

        for(i1 = 0; i1 < n; i1++)
        {
            for(i2 = 0; i2 < n; i2++)
            {
                scanf("%d", &m[i1][i2]);
            }
        }

        for(i = 0; i < n; i++)
        {
            t = 0;
            for(r = 0; r < n; r++)
            {
                t += m[i][r];
            }
            printf("%5d", t);
        }
        printf("\n");
        for(i = 0; i < n; i++)
        {
            t = 0;
            for(r = 0; r < n; r++)
            {
                t += m[r][i];
            }
            printf("%5d", t);
        }
        printf("\n");
    }

    return 0;
}
