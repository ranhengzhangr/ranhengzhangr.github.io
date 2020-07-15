#include <stdio.h>

int main (void)
{
    int i, n, r, u;

    scanf("%d\n", &n);
    u = n;

    int a[n];

    while(n != 0)
    {
        int t = 0;

        while((r = getchar()) != '\n')
        {
            if(r > 47&&r < 58){
                t++;
            }
        }
        n--;
        a[n] = t;
    }
    for (i = 1; i <= u; i++)
    {
        printf("%d\n", a[u - i]);
    }

    return 0;
}
