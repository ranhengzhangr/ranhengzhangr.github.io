#include <stdio.h>

int main (void)
{
    int n;

    while (scanf("%d", &n) != EOF )
    {
        int a[n], b, c, i, t, u = 0, mote, foce;

        if(n == 0){
            return 0;
        }
        else{
            for (i = 0; i < n; i++)
            {
                scanf(" %d", &t);
                a[i] = t;
            }
            b = a[0];
            for (i = 1; i < n; i++)
            {
                c = a[i];
                while(c < b)
                {
                    mote = b;
                    b = c;
                    c = mote;
                    u = i;
                }
            }
            foce = a[0];
            a[0] = a[u];
            a[u] = foce;
            n--;
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("%d\n", a[n]);
        }
    }

    return 0;
}
