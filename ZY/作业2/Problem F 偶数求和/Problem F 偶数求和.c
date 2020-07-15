#include <stdio.h>

int average_full(int r, int p, const int a[]);

int average_lost(int r,int q, int p, const int a[]);

int main (void)
{
    int m, n, a[100] = {0};

    while(scanf("%d %d", &n, &m) != EOF )
    {
        int t = 0;

        for (int i = 0; i < n; i++)
        {
            a[i] = 2 + 2 * i;
        }
        for (; n > m; n -= m)
        {
            average_full(t, m, a);
            t++;
        }
        average_lost(t, m, n, a);
    }

    return 0;
}

int average_full(int r, int p,const int a[])
{
    int ave, sum = 0, c = 0, i;

    for(i = r * p; c < p; c++)
    {
        sum += a[i];
        i++;
    }
    ave = sum / p;
    printf("%d ", ave);
}

int average_lost(int r,int q, int p, const int a[])
{
    int ave, sum = 0, c = 0, i;

    for(i = r * q; c < p; c++)
    {
        sum += a[i];
        i++;
    }
    ave = sum / p;
    printf("%d\n", ave);
}
