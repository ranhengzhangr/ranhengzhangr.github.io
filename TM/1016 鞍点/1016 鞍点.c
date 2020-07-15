#include <stdio.h>

int main (void)
{
    int n, x, y, ix, iy, sum, flag;

    scanf("%d", &n);
    int A[n][n];

    for(ix = 0; ix < n; ix++)
    {
        for(iy = 0; iy < n; iy++)
        {
            scanf("%d", &A[ix][iy]);
        }
    }
    flag = 0;
    for(y = 0; y < n&&flag == 0; y++)
    {
        for(ix = 0, x = 0; ix < n; ix++)
        {
            if(A[ix][y] < A[x][y]){
                x = ix;
            }
        }
        for(iy = 0, sum = 0; iy < n; iy++)
        {
            if(A[x][iy] > A[x][y]){
                sum = 1;
            }
        }
        flag = 1 - sum;
    }
    if(flag == 0){
        printf("NO\n");
    }
    else{
        printf("%d %d\n", x, y - 1);
    }

    return 0;
}
