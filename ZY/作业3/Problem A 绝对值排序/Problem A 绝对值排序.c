#include <stdio.h>

int main (void)
{
    int i, i1, i2, n, mote, fose;

    while(scanf("%d", &n) != EOF )
    {
        if(n == 0){
            ;
        }
        else{
            int a[n], b[n];

            for(i = 0; i < n; i++)
            {
                scanf(" %d", &a[i]);
                if(a[i] >= 0){
                    b[i] = a[i];
                }
                else{
                    b[i] = -a[i];
                }
            }
            for(i1 = 0; i1 < n; i1++)
            {
                for(i2 = i1 + 1; i2 < n; i2++)
                {
                    while(b[i1] < b[i2])
                    {
                        mote = a[i1], a[i1] = a[i2], a[i2] = mote;
                        fose = b[i1], b[i1] = b[i2], b[i2] = fose;
                    }
                }
            }
            n--;
            for(i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("%d\n", a[n]);
        }
    }

    return 0;
}
