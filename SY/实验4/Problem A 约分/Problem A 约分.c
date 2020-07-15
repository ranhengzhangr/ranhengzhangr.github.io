#include <stdio.h>

int main (void)
{
    int m, n, p, q, s, t, x, y;

    while(scanf ("%d/%d", &m, &n) != EOF)
    {
        x = m, y = n, s = 1;
        while(s > 0)
        {
            if(x >= y){
                t = y;
                x = x % y;
                s = x;
            }
            else{
                t = x;
                y = y % x;
                s = y;
            }
        }
        p = m / t;
        q = n / t;
        printf("%d/%d\n", p, q);
    }

    return 0;
}
