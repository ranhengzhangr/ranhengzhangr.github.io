#include <stdio.h>

int main (void)
{
    int n;

    while(scanf("%d", &n) != EOF )
    {
        int a[n], i, t, mote;

        for(i = 0; i < n; i++)
        {
            scanf(" %d", &a[i]);
        }
        t = a[0];
        mote = t;
        for(i = 1; i < n; i++)
        {
            while(mote % a[i] != 0)
            {
                mote += t;
            }
            t = mote;
        }
        printf("%d\n", mote);
    }

    return 0;
}
