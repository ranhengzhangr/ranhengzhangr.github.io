#include <stdio.h>

int main (void)
{
    int i, n, x, y, u, r, x0, y0;

    scanf("%d", &n);
    int a[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    x0 = 0, u = 0;
    for(i = 0; i < n&&u == 0; i++)
    {
        y0 = i;
        for(x = 0; x < n; x++)
        {
            if(a[x][i] < a[x0][i]){
                x0 = x;
            }
        }
        r = 0;
        for(y = 0; y < n&&r == 0; y++)
        {
            if(y == y0){
                y++;
            }
            if(a[x0][y] > a[x0][y0]){
                r = 1;
            }
        }
        if(r == 0){
            u = 1;
        }
    }
    if(u == 0){
        printf("NONE\n");
    }
    else{
        printf("%d %d\n", x0, y0);
    }

    return 0;
}
