#include <stdio.h>

int main (void)
{
    int d, e, i, n, s, w;

    scanf("%d %d", &d, &w);
    n = d + w - 1;
    for (i = 1; i < w; i++)
    {
        printf ("   ");
    }
    for (;i <= n;i++)
    {
        s = i - w + 1;
        e = i % 7;
        if (e == 0){
            printf("%3d\n", s);
        }
        else{
            printf("%3d", s);
        }
    }
    return 0;
}
