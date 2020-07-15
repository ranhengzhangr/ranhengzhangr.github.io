#include <stdio.h>

int main (void)
{
    int n, t, ra1, ra2, ra3, sum;

    scanf("%d", &n);
    t = 1; ra1 = 1, ra2 = 0, ra3 = 0;
    for(sum = ra1; sum < n; t++)
    {
        ra3 += ra2;
        ra2 = ra1;
        ra1 = ra3;
        sum = ra1 + ra2 + ra3;
    }
    printf("%d\n", t);

    return 0;
}
