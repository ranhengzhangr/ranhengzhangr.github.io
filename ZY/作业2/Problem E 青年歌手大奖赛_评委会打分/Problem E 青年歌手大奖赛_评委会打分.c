#include <stdio.h>

int main (void)
{
    int i, n, p, q,  t;
    float d, r;

    while (scanf("%d", &n) != EOF)
    {
    int a[100] = {0};

    r = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d", &t);
        a[i] = t;
    }
    for(p = 0;p < n;p++)
    {
        for(q = p;q < n;q++)
        {
            if(a[p] < a[q]){
                t = a[p];
                a[p] = a[q];
                a[q] = t;
            }
            else{
                ;
            }
        }
    }
    n -= 1;
    for(i = 1;i < n;i++)
    {
        r += a[i];
    }
    d = r / (n - 1);
    printf("%.2f\n", d);
    }

    return 0;
}
