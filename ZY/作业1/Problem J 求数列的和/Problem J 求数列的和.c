#include <stdio.h>

int main (void)
{
    int m, n, i;
    double t, r;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        t = n;
        r = n;
        for(i = 1;i < m;i++)
        {
            r = sqrt(r);
            t += r;
        }
        printf ("%.2f\n", t);
    }

    return 0;
}
