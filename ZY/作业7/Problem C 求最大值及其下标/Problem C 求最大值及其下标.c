#include <stdio.h>

int main (void)
{
    int i, n, t, k;

    if(1 < n < 11){
        scanf("%d", &n);
        int a[n];

        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        t = a[0], k = 0;
        for(i = 1; i < n; i++)
        {
            if(a[i] > t){
                t = a[i];
                k = i;
            }
        }
        printf("%d %d\n", t, k);
    }

    return 0;
}
