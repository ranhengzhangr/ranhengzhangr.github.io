#include <stdio.h>

int main (void)
{
    int i, n, t;

    t = 4;
    scanf("%d", &n);
    for (i = 2; t <= n; i++)
    {
        printf("%d\n", t);
        t = 4 * i * i;
    }

    return 0;
}
